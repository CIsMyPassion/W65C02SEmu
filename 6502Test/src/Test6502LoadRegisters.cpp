#include<gtest/gtest.h>
#include"6502Emu.h"

class Test6502LoadRegisters : public testing::Test
{
public:
	emu6502::CPU cpu;

	virtual void SetUp()
	{

	}

	virtual void TearDown()
	{

	}

	void TestLoadRegisterImmediate(
			emu6502::Byte opcodeToTest,
			emu6502::Byte emu6502::CPU::*registerToTest);
};

static void verifyUnmodifiedFlags(
		const emu6502::CPU& cpu,
		const emu6502::CPU& cpuCopy)
{
	EXPECT_EQ(cpu.Flags.C, cpuCopy.Flags.C);
	EXPECT_EQ(cpu.Flags.I, cpuCopy.Flags.I);
	EXPECT_EQ(cpu.Flags.D, cpuCopy.Flags.D);
	EXPECT_EQ(cpu.Flags.B, cpuCopy.Flags.B);
	EXPECT_EQ(cpu.Flags.V, cpuCopy.Flags.V);
}

void Test6502LoadRegisters::TestLoadRegisterImmediate(
		emu6502::Byte opcodeToTest,
		emu6502::Byte emu6502::CPU::*registerToTest)
{
	using namespace emu6502;
	cpu.memory[0xfffc] = opcodeToTest;
	cpu.memory[0xfffd] = 0x84;

	CPU cpuCopy = cpu;
	s32 cyclesUsed = cpu.execute(2);

	EXPECT_EQ(cpu.*registerToTest, 0x84);
	EXPECT_EQ(cyclesUsed, 2);
	EXPECT_FALSE(cpu.Flags.Z);
	EXPECT_TRUE(cpu.Flags.N);
	verifyUnmodifiedFlags(cpu, cpuCopy);
}

TEST_F(Test6502LoadRegisters, LDAImmediateCanLoadAValue)
{
	using namespace emu6502;
	TestLoadRegisterImmediate(0xa9, &CPU::A);
}
