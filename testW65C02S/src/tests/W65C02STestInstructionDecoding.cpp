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

	decoder.setOpCode((Byte) OpCode::RMB2_Z);
	Instruction rmb2 = decoder.getInstruction();
	ASSERT_EQ(rmb2, Instruction::RMB2);

	decoder.setOpCode((Byte) OpCode::RMB3_Z);
	Instruction rmb3 = decoder.getInstruction();
	ASSERT_EQ(rmb3, Instruction::RMB3);

	decoder.setOpCode((Byte) OpCode::RMB4_Z);
	Instruction rmb4 = decoder.getInstruction();
	ASSERT_EQ(rmb4, Instruction::RMB4);

	decoder.setOpCode((Byte) OpCode::RMB5_Z);
	Instruction rmb5 = decoder.getInstruction();
	ASSERT_EQ(rmb5, Instruction::RMB5);

	decoder.setOpCode((Byte) OpCode::RMB6_Z);
	Instruction rmb6 = decoder.getInstruction();
	ASSERT_EQ(rmb6, Instruction::RMB6);

	decoder.setOpCode((Byte) OpCode::RMB7_Z);
	Instruction rmb7 = decoder.getInstruction();
	ASSERT_EQ(rmb7, Instruction::RMB7);
}

TEST_F(W65C02STestInstructionDecoding, PHP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PHP_S);
	Instruction php = decoder.getInstruction();
	ASSERT_EQ(php, Instruction::PHP);
}

TEST_F(W65C02STestInstructionDecoding, BBR_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BBR0_P);
	Instruction bbr0 = decoder.getInstruction();
	ASSERT_EQ(bbr0, Instruction::BBR0);

	decoder.setOpCode((Byte) OpCode::BBR1_P);
	Instruction bbr1 = decoder.getInstruction();
	ASSERT_EQ(bbr1, Instruction::BBR1);

	decoder.setOpCode((Byte) OpCode::BBR2_P);
	Instruction bbr2 = decoder.getInstruction();
	ASSERT_EQ(bbr2, Instruction::BBR2);

	decoder.setOpCode((Byte) OpCode::BBR3_P);
	Instruction bbr3 = decoder.getInstruction();
	ASSERT_EQ(bbr3, Instruction::BBR3);

	decoder.setOpCode((Byte) OpCode::BBR4_P);
	Instruction bbr4 = decoder.getInstruction();
	ASSERT_EQ(bbr4, Instruction::BBR4);

	decoder.setOpCode((Byte) OpCode::BBR5_P);
	Instruction bbr5 = decoder.getInstruction();
	ASSERT_EQ(bbr5, Instruction::BBR5);

	decoder.setOpCode((Byte) OpCode::BBR6_P);
	Instruction bbr6 = decoder.getInstruction();
	ASSERT_EQ(bbr6, Instruction::BBR6);

	decoder.setOpCode((Byte) OpCode::BBR7_P);
	Instruction bbr7 = decoder.getInstruction();
	ASSERT_EQ(bbr7, Instruction::BBR7);
}

TEST_F(W65C02STestInstructionDecoding, BPL_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BPL_P);
	Instruction bpl = decoder.getInstruction();
	ASSERT_EQ(bpl, Instruction::BPL);
}

TEST_F(W65C02STestInstructionDecoding, TRB_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TRB_Z);
	Instruction trb_z = decoder.getInstruction();
	ASSERT_EQ(trb_z, Instruction::TRB);

	decoder.setOpCode((Byte) OpCode::TRB_AI);
	Instruction trb_ai = decoder.getInstruction();
	ASSERT_EQ(trb_ai, Instruction::TRB);
}

TEST_F(W65C02STestInstructionDecoding, CLC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CLC);
	Instruction clc = decoder.getInstruction();
	ASSERT_EQ(clc, Instruction::CLC);
}

TEST_F(W65C02STestInstructionDecoding, INC_Decoding)
{
using namespace W65C02S;

decoder.setOpCode((Byte) OpCode::INC_ACC);
Instruction inc_acc = decoder.getInstruction();
ASSERT_EQ(inc_acc, Instruction::INC);
}

TEST_F(W65C02STestInstructionDecoding, JSR_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::JSR_AI);
	Instruction jsr_ai = decoder.getInstruction();
	ASSERT_EQ(jsr_ai, Instruction::JSR);
}

TEST_F(W65C02STestInstructionDecoding, AND_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::AND_ZII);
	Instruction and_zii = decoder.getInstruction();
	ASSERT_EQ(and_zii, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_Z);
	Instruction and_z = decoder.getInstruction();
	ASSERT_EQ(and_z, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_I);
	Instruction and_i = decoder.getInstruction();
	ASSERT_EQ(and_i, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_A);
	Instruction and_a = decoder.getInstruction();
	ASSERT_EQ(and_a, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_ZIIY);
	Instruction and_ziiy = decoder.getInstruction();
	ASSERT_EQ(and_ziiy, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_ZI);
	Instruction and_zi = decoder.getInstruction();
	ASSERT_EQ(and_zi, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_ZIX);
	Instruction and_zix = decoder.getInstruction();
	ASSERT_EQ(and_zix, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_AIY);
	Instruction and_aiy = decoder.getInstruction();
	ASSERT_EQ(and_aiy, Instruction::AND);

	decoder.setOpCode((Byte) OpCode::AND_AIX);
	Instruction and_aix = decoder.getInstruction();
	ASSERT_EQ(and_aix, Instruction::AND);
}

TEST_F(W65C02STestInstructionDecoding, BIT_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BIT_Z);
	Instruction bit_z = decoder.getInstruction();
	ASSERT_EQ(bit_z, Instruction::BIT);

	decoder.setOpCode((Byte) OpCode::BIT_A);
	Instruction bit_a = decoder.getInstruction();
	ASSERT_EQ(bit_a, Instruction::BIT);

	decoder.setOpCode((Byte) OpCode::BIT_ZIX);
	Instruction bit_zix = decoder.getInstruction();
	ASSERT_EQ(bit_zix, Instruction::BIT);

	decoder.setOpCode((Byte) OpCode::BIT_AIX);
	Instruction bit_aix = decoder.getInstruction();
	ASSERT_EQ(bit_aix, Instruction::BIT);

	decoder.setOpCode((Byte) OpCode::BIT_I);
	Instruction bit_i = decoder.getInstruction();
	ASSERT_EQ(bit_i, Instruction::BIT);
}

TEST_F(W65C02STestInstructionDecoding, ROL_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::ROL_Z);
	Instruction rol_z = decoder.getInstruction();
	ASSERT_EQ(rol_z, Instruction::ROL);

	decoder.setOpCode((Byte) OpCode::ROL_ACC);
	Instruction rol_acc = decoder.getInstruction();
	ASSERT_EQ(rol_acc, Instruction::ROL);

	decoder.setOpCode((Byte) OpCode::ROL_A);
	Instruction rol_a = decoder.getInstruction();
	ASSERT_EQ(rol_a, Instruction::ROL);

	decoder.setOpCode((Byte) OpCode::ROL_ZIX);
	Instruction rol_zix = decoder.getInstruction();
	ASSERT_EQ(rol_zix, Instruction::ROL);

	decoder.setOpCode((Byte) OpCode::ROL_AIX);
	Instruction rol_aix = decoder.getInstruction();
	ASSERT_EQ(rol_aix, Instruction::ROL);
}

TEST_F(W65C02STestInstructionDecoding, PLP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PLP_S);
	Instruction plp_s = decoder.getInstruction();
	ASSERT_EQ(plp_s, Instruction::PLP);
}

TEST_F(W65C02STestInstructionDecoding, BMI_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BMI_P);
	Instruction bmi_p = decoder.getInstruction();
	ASSERT_EQ(bmi_p, Instruction::BMI);
}

TEST_F(W65C02STestInstructionDecoding, SEC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::SEC);
	Instruction sec = decoder.getInstruction();
	ASSERT_EQ(sec, Instruction::SEC);
}

TEST_F(W65C02STestInstructionDecoding, DEC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::DEC_ACC);
	Instruction dec_acc = decoder.getInstruction();
	ASSERT_EQ(dec_acc, Instruction::DEC);
}
