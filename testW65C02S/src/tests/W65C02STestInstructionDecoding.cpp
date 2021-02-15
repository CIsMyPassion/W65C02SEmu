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

TEST_F(W65C02STestInstructionDecoding, RTI_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::RTI_S);
	Instruction rti_s = decoder.getInstruction();
	ASSERT_EQ(rti_s, Instruction::RTI);
}

TEST_F(W65C02STestInstructionDecoding, EOR_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::EOR_ZII);
	Instruction eor_zii = decoder.getInstruction();
	ASSERT_EQ(eor_zii, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_Z);
	Instruction eor_z = decoder.getInstruction();
	ASSERT_EQ(eor_z, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_I);
	Instruction eor_i = decoder.getInstruction();
	ASSERT_EQ(eor_i, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_A);
	Instruction eor_a = decoder.getInstruction();
	ASSERT_EQ(eor_a, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_ZIIY);
	Instruction eor_ziiy = decoder.getInstruction();
	ASSERT_EQ(eor_ziiy, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_ZI);
	Instruction eor_zi = decoder.getInstruction();
	ASSERT_EQ(eor_zi, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_ZIX);
	Instruction eor_zix = decoder.getInstruction();
	ASSERT_EQ(eor_zix, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_AIY);
	Instruction eor_aiy = decoder.getInstruction();
	ASSERT_EQ(eor_aiy, Instruction::EOR);

	decoder.setOpCode((Byte) OpCode::EOR_AIX);
	Instruction eor_aix = decoder.getInstruction();
	ASSERT_EQ(eor_aix, Instruction::EOR);
}

TEST_F(W65C02STestInstructionDecoding, LSR_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::LSR_Z);
	Instruction lsr_z = decoder.getInstruction();
	ASSERT_EQ(lsr_z, Instruction::LSR);

	decoder.setOpCode((Byte) OpCode::LSR_ACC);
	Instruction lsr_acc = decoder.getInstruction();
	ASSERT_EQ(lsr_acc, Instruction::LSR);

	decoder.setOpCode((Byte) OpCode::LSR_A);
	Instruction lsr_a = decoder.getInstruction();
	ASSERT_EQ(lsr_a, Instruction::LSR);

	decoder.setOpCode((Byte) OpCode::LSR_ZIX);
	Instruction lsr_zix = decoder.getInstruction();
	ASSERT_EQ(lsr_zix, Instruction::LSR);

	decoder.setOpCode((Byte) OpCode::LSR_AIX);
	Instruction lsr_aix = decoder.getInstruction();
	ASSERT_EQ(lsr_aix, Instruction::LSR);
}

TEST_F(W65C02STestInstructionDecoding, PHA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PHA_S);
	Instruction pha_s = decoder.getInstruction();
	ASSERT_EQ(pha_s, Instruction::PHA);
}

TEST_F(W65C02STestInstructionDecoding, JMP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::JMP_A);
	Instruction jmp_a = decoder.getInstruction();
	ASSERT_EQ(jmp_a, Instruction::JMP);

	decoder.setOpCode((Byte) OpCode::JMP_AI);
	Instruction jmp_ai = decoder.getInstruction();
	ASSERT_EQ(jmp_ai, Instruction::JMP);

	decoder.setOpCode((Byte) OpCode::JMP_AII);
	Instruction jmp_aii = decoder.getInstruction();
	ASSERT_EQ(jmp_aii, Instruction::JMP);
}

TEST_F(W65C02STestInstructionDecoding, BVC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BVC_P);
	Instruction bvc_p = decoder.getInstruction();
	ASSERT_EQ(bvc_p, Instruction::BVC);
}

TEST_F(W65C02STestInstructionDecoding, CLI_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CLI);
	Instruction cli = decoder.getInstruction();
	ASSERT_EQ(cli, Instruction::CLI);
}

TEST_F(W65C02STestInstructionDecoding, PHY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PHY_S);
	Instruction phy_s = decoder.getInstruction();
	ASSERT_EQ(phy_s, Instruction::PHY);
}

TEST_F(W65C02STestInstructionDecoding, RTS_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::RTS_S);
	Instruction rts_s = decoder.getInstruction();
	ASSERT_EQ(rts_s, Instruction::RTS);
}

TEST_F(W65C02STestInstructionDecoding, ADC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::ADC_ZIIX);
	Instruction adc_ziix = decoder.getInstruction();
	ASSERT_EQ(adc_ziix, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_Z);
	Instruction adc_z = decoder.getInstruction();
	ASSERT_EQ(adc_z, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_I);
	Instruction adc_i = decoder.getInstruction();
	ASSERT_EQ(adc_i, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_A);
	Instruction adc_a = decoder.getInstruction();
	ASSERT_EQ(adc_a, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_ZIIY);
	Instruction adc_ziiy = decoder.getInstruction();
	ASSERT_EQ(adc_ziiy, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_ZI);
	Instruction adc_zi = decoder.getInstruction();
	ASSERT_EQ(adc_zi, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_ZIX);
	Instruction adc_zix = decoder.getInstruction();
	ASSERT_EQ(adc_zix, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_AIY);
	Instruction adc_aiy = decoder.getInstruction();
	ASSERT_EQ(adc_aiy, Instruction::ADC);

	decoder.setOpCode((Byte) OpCode::ADC_AIX);
	Instruction adc_aix = decoder.getInstruction();
	ASSERT_EQ(adc_aix, Instruction::ADC);
}

TEST_F(W65C02STestInstructionDecoding, STZ_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::STZ_Z);
	Instruction stz_z = decoder.getInstruction();
	ASSERT_EQ(stz_z, Instruction::STZ);

	decoder.setOpCode((Byte) OpCode::STZ_ZIX);
	Instruction stz_zix = decoder.getInstruction();
	ASSERT_EQ(stz_zix, Instruction::STZ);
}

TEST_F(W65C02STestInstructionDecoding, ROR_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::ROR_Z);
	Instruction ror_z = decoder.getInstruction();
	ASSERT_EQ(ror_z, Instruction::ROR);

	decoder.setOpCode((Byte) OpCode::ROR_ACC);
	Instruction ror_acc = decoder.getInstruction();
	ASSERT_EQ(ror_acc, Instruction::ROR);

	decoder.setOpCode((Byte) OpCode::ROR_A);
	Instruction ror_a = decoder.getInstruction();
	ASSERT_EQ(ror_a, Instruction::ROR);

	decoder.setOpCode((Byte) OpCode::ROR_ZIX);
	Instruction ror_zix = decoder.getInstruction();
	ASSERT_EQ(ror_zix, Instruction::ROR);

	decoder.setOpCode((Byte) OpCode::ROR_AIX);
	Instruction ror_aix = decoder.getInstruction();
	ASSERT_EQ(ror_aix, Instruction::ROR);
}

TEST_F(W65C02STestInstructionDecoding, PLA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PLA_S);
	Instruction pla_s = decoder.getInstruction();
	ASSERT_EQ(pla_s, Instruction::PLA);
}

TEST_F(W65C02STestInstructionDecoding, BVS_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BVS_P);
	Instruction bvs_p = decoder.getInstruction();
	ASSERT_EQ(bvs_p, Instruction::BVS);
}

TEST_F(W65C02STestInstructionDecoding, SEI_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::SEI);
	Instruction sei = decoder.getInstruction();
	ASSERT_EQ(sei, Instruction::SEI);
}

TEST_F(W65C02STestInstructionDecoding, PLY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PLY_S);
	Instruction ply_s = decoder.getInstruction();
	ASSERT_EQ(ply_s, Instruction::PLY);
}
