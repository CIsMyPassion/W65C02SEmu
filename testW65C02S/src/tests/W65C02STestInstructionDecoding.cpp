#include<gtest/gtest.h>
#include"emuW65C02S.h"

class W65C02STestInstructionDecoding : public testing::Test
{
public:
	W65C02S::InstructionDecoder decoder;

	virtual void SetUp()
	{

	}

	virtual void TearDown()
	{

	}

};

TEST_F(W65C02STestInstructionDecoding, BRK_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BRK);
	ASSERT_EQ(decoder.getInstruction(), Instruction::BRK);
}

TEST_F(W65C02STestInstructionDecoding, ORA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::ORA_ZII);
	Instruction ora_zii = decoder.getInstruction();
	ASSERT_EQ(ora_zii, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_ZIIY);
	Instruction ora_ziiy = decoder.getInstruction();
	ASSERT_EQ(ora_ziiy, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_ZI);
	Instruction ora_zi = decoder.getInstruction();
	ASSERT_EQ(ora_zi, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_Z);
	Instruction ora_z = decoder.getInstruction();
	ASSERT_EQ(ora_z, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_ZIX);
	Instruction ora_zix = decoder.getInstruction();
	ASSERT_EQ(ora_zix, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_I);
	Instruction ora_i = decoder.getInstruction();
	ASSERT_EQ(ora_i, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_AIY);
	Instruction ora_aiy = decoder.getInstruction();
	ASSERT_EQ(ora_aiy, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_AI);
	Instruction ora_ai = decoder.getInstruction();
	ASSERT_EQ(ora_ai, Instruction::ORA);

	decoder.setOpCode((Byte) OpCode::ORA_AIX);
	Instruction ora_aix = decoder.getInstruction();
	ASSERT_EQ(ora_aix, Instruction::ORA);
}

TEST_F(W65C02STestInstructionDecoding, TSB_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TSB_Z);
	Instruction tsb_z = decoder.getInstruction();
	ASSERT_EQ(tsb_z, Instruction::TSB);

	decoder.setOpCode((Byte) OpCode::TSB_AI);
	Instruction tsb_ai = decoder.getInstruction();
	ASSERT_EQ(tsb_ai, Instruction::TSB);
}

TEST_F(W65C02STestInstructionDecoding, ASL_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::ASL_Z);
	Instruction asl_z = decoder.getInstruction();
	ASSERT_EQ(asl_z, Instruction::ASL);

	decoder.setOpCode((Byte) OpCode::ASL_ACC);
	Instruction asl_acc = decoder.getInstruction();
	ASSERT_EQ(asl_acc, Instruction::ASL);
	
	decoder.setOpCode((Byte) OpCode::ASL_AI);
	Instruction asl_ai = decoder.getInstruction();
	ASSERT_EQ(asl_ai, Instruction::ASL);

	decoder.setOpCode((Byte) OpCode::ASL_ZIX);
	Instruction asl_zix = decoder.getInstruction();
	ASSERT_EQ(asl_zix, Instruction::ASL);

	decoder.setOpCode((Byte) OpCode::ASL_AIX);
	Instruction asl_aix = decoder.getInstruction();
	ASSERT_EQ(asl_aix, Instruction::ASL);
}

TEST_F(W65C02STestInstructionDecoding, RMB_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::RMB0_Z);
	Instruction rmb0 = decoder.getInstruction();
	ASSERT_EQ(rmb0, Instruction::RMB0);

	decoder.setOpCode((Byte) OpCode::RMB1_Z);
	Instruction rmb1 = decoder.getInstruction();
	ASSERT_EQ(rmb1, Instruction::RMB1);
}

TEST_F(W65C02STestInstructionDecoding, PHP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PHP_S);
	Instruction php = decoder.getInstruction();
	ASSERT_EQ(php, Instruction::PHP);
}
