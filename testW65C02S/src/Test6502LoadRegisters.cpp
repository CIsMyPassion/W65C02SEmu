#include<gtest/gtest.h>
#include"emuW65C02S.h"

class Test6502LoadRegisters : public testing::Test
{
public:
	W65C02S::CPU cpu;

	virtual void SetUp()
	{

	}

	virtual void TearDown()
	{

	}
};

TEST_F(Test6502LoadRegisters, LDAImmediateCanLoadAValue)
{
	ASSERT_EQ(14, 13);
}
