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

	decoder.setOpCode((Byte) OpCode::INC_Z);
	Instruction inc_z = decoder.getInstruction();
	ASSERT_EQ(inc_z, Instruction::INC);

	decoder.setOpCode((Byte) OpCode::INC_ZIX);
	Instruction inc_zix = decoder.getInstruction();
	ASSERT_EQ(inc_zix, Instruction::INC);

	decoder.setOpCode((Byte) OpCode::INC_A);
	Instruction inc_a = decoder.getInstruction();
	ASSERT_EQ(inc_a, Instruction::INC);

	decoder.setOpCode((Byte) OpCode::INC_AIX);
	Instruction inc_aix = decoder.getInstruction();
	ASSERT_EQ(inc_aix, Instruction::INC);
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

	decoder.setOpCode((Byte) OpCode::DEC_Z);
	Instruction dec_z = decoder.getInstruction();
	ASSERT_EQ(dec_z, Instruction::DEC);

	decoder.setOpCode((Byte) OpCode::DEC_A);
	Instruction dec_a = decoder.getInstruction();
	ASSERT_EQ(dec_a, Instruction::DEC);

	decoder.setOpCode((Byte) OpCode::DEC_ZIX);
	Instruction dec_zix = decoder.getInstruction();
	ASSERT_EQ(dec_zix, Instruction::DEC);

	decoder.setOpCode((Byte) OpCode::DEC_AIX);
	Instruction dec_aix = decoder.getInstruction();
	ASSERT_EQ(dec_aix, Instruction::DEC);
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

	decoder.setOpCode((Byte) OpCode::STZ_A);
	Instruction stz_a = decoder.getInstruction();
	ASSERT_EQ(stz_a, Instruction::STZ);

	decoder.setOpCode((Byte) OpCode::STZ_AIX);
	Instruction stz_aix = decoder.getInstruction();
	ASSERT_EQ(stz_aix, Instruction::STZ);
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

TEST_F(W65C02STestInstructionDecoding, BRA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BRA_P);
	Instruction bra_p = decoder.getInstruction();
	ASSERT_EQ(bra_p, Instruction::BRA);
}

TEST_F(W65C02STestInstructionDecoding, STA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::STA_ZII);
	Instruction sta_zii = decoder.getInstruction();
	ASSERT_EQ(sta_zii, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_Z);
	Instruction sta_z = decoder.getInstruction();
	ASSERT_EQ(sta_z, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_A);
	Instruction sta_a = decoder.getInstruction();
	ASSERT_EQ(sta_a, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_ZIIY);
	Instruction sta_ziiy = decoder.getInstruction();
	ASSERT_EQ(sta_ziiy, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_ZI);
	Instruction sta_zi = decoder.getInstruction();
	ASSERT_EQ(sta_zi, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_ZIX);
	Instruction sta_zix = decoder.getInstruction();
	ASSERT_EQ(sta_zix, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_AIY);
	Instruction sta_aiy = decoder.getInstruction();
	ASSERT_EQ(sta_aiy, Instruction::STA);

	decoder.setOpCode((Byte) OpCode::STA_AIX);
	Instruction sta_aix = decoder.getInstruction();
	ASSERT_EQ(sta_aix, Instruction::STA);
}

TEST_F(W65C02STestInstructionDecoding, STY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::STY_Z);
	Instruction sty_z = decoder.getInstruction();
	ASSERT_EQ(sty_z, Instruction::STY);

	decoder.setOpCode((Byte) OpCode::STY_A);
	Instruction sty_a = decoder.getInstruction();
	ASSERT_EQ(sty_a, Instruction::STY);

	decoder.setOpCode((Byte) OpCode::STY_ZIX);
	Instruction sty_zix = decoder.getInstruction();
	ASSERT_EQ(sty_zix, Instruction::STY);
}

TEST_F(W65C02STestInstructionDecoding, STX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::STX_Z);
	Instruction stx_z = decoder.getInstruction();
	ASSERT_EQ(stx_z, Instruction::STX);

	decoder.setOpCode((Byte) OpCode::STX_A);
	Instruction stx_a = decoder.getInstruction();
	ASSERT_EQ(stx_a, Instruction::STX);

	decoder.setOpCode((Byte) OpCode::STX_ZIX);
	Instruction stx_zix = decoder.getInstruction();
	ASSERT_EQ(stx_zix, Instruction::STX);
}

TEST_F(W65C02STestInstructionDecoding, SMB_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::SMB0_Z);
	Instruction smb0 = decoder.getInstruction();
	ASSERT_EQ(smb0, Instruction::SMB0);

	decoder.setOpCode((Byte) OpCode::SMB1_Z);
	Instruction smb1 = decoder.getInstruction();
	ASSERT_EQ(smb1, Instruction::SMB1);

	decoder.setOpCode((Byte) OpCode::SMB2_Z);
	Instruction smb2 = decoder.getInstruction();
	ASSERT_EQ(smb2, Instruction::SMB2);

	decoder.setOpCode((Byte) OpCode::SMB3_Z);
	Instruction smb3 = decoder.getInstruction();
	ASSERT_EQ(smb3, Instruction::SMB3);

	decoder.setOpCode((Byte) OpCode::SMB4_Z);
	Instruction smb4 = decoder.getInstruction();
	ASSERT_EQ(smb4, Instruction::SMB4);

	decoder.setOpCode((Byte) OpCode::SMB5_Z);
	Instruction smb5 = decoder.getInstruction();
	ASSERT_EQ(smb5, Instruction::SMB5);

	decoder.setOpCode((Byte) OpCode::SMB6_Z);
	Instruction smb6 = decoder.getInstruction();
	ASSERT_EQ(smb6, Instruction::SMB6);

	decoder.setOpCode((Byte) OpCode::SMB7_Z);
	Instruction smb7 = decoder.getInstruction();
	ASSERT_EQ(smb7, Instruction::SMB7);
}

TEST_F(W65C02STestInstructionDecoding, DEY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::DEY);
	Instruction dey = decoder.getInstruction();
	ASSERT_EQ(dey, Instruction::DEY);
}

TEST_F(W65C02STestInstructionDecoding, TXA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TXA);
	Instruction txa = decoder.getInstruction();
	ASSERT_EQ(txa, Instruction::TXA);
}

TEST_F(W65C02STestInstructionDecoding, BBS_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BBS0_P);
	Instruction bbs0 = decoder.getInstruction();
	ASSERT_EQ(bbs0, Instruction::BBS0);

	decoder.setOpCode((Byte) OpCode::BBS1_P);
	Instruction bbs1 = decoder.getInstruction();
	ASSERT_EQ(bbs1, Instruction::BBS1);

	decoder.setOpCode((Byte) OpCode::BBS2_P);
	Instruction bbs2 = decoder.getInstruction();
	ASSERT_EQ(bbs2, Instruction::BBS2);

	decoder.setOpCode((Byte) OpCode::BBS3_P);
	Instruction bbs3 = decoder.getInstruction();
	ASSERT_EQ(bbs3, Instruction::BBS3);

	decoder.setOpCode((Byte) OpCode::BBS4_P);
	Instruction bbs4 = decoder.getInstruction();
	ASSERT_EQ(bbs4, Instruction::BBS4);

	decoder.setOpCode((Byte) OpCode::BBS5_P);
	Instruction bbs5 = decoder.getInstruction();
	ASSERT_EQ(bbs5, Instruction::BBS5);

	decoder.setOpCode((Byte) OpCode::BBS6_P);
	Instruction bbs6 = decoder.getInstruction();
	ASSERT_EQ(bbs6, Instruction::BBS6);

	decoder.setOpCode((Byte) OpCode::BBS7_P);
	Instruction bbs7 = decoder.getInstruction();
	ASSERT_EQ(bbs7, Instruction::BBS7);
}

TEST_F(W65C02STestInstructionDecoding, BCC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BCC_P);
	Instruction bcc_p = decoder.getInstruction();
	ASSERT_EQ(bcc_p, Instruction::BCC);
}

TEST_F(W65C02STestInstructionDecoding, TYA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TYA);
	Instruction tya = decoder.getInstruction();
	ASSERT_EQ(tya, Instruction::TYA);
}

TEST_F(W65C02STestInstructionDecoding, TXS_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TXS);
	Instruction txs = decoder.getInstruction();
	ASSERT_EQ(txs, Instruction::TXS);
}

TEST_F(W65C02STestInstructionDecoding, LDY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::LDY_I);
	Instruction ldy_i = decoder.getInstruction();
	ASSERT_EQ(ldy_i, Instruction::LDY);

	decoder.setOpCode((Byte) OpCode::LDY_Z);
	Instruction ldy_z = decoder.getInstruction();
	ASSERT_EQ(ldy_z, Instruction::LDY);

	decoder.setOpCode((Byte) OpCode::LDY_ACC);
	Instruction ldy_acc = decoder.getInstruction();
	ASSERT_EQ(ldy_acc, Instruction::LDY);

	decoder.setOpCode((Byte) OpCode::LDY_ZIX);
	Instruction ldy_zix = decoder.getInstruction();
	ASSERT_EQ(ldy_zix, Instruction::LDY);

	decoder.setOpCode((Byte) OpCode::LDY_AIX);
	Instruction ldy_aix = decoder.getInstruction();
	ASSERT_EQ(ldy_aix, Instruction::LDY);
}

TEST_F(W65C02STestInstructionDecoding, LDA_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::LDA_ZII);
	Instruction lda_zii = decoder.getInstruction();
	ASSERT_EQ(lda_zii, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_Z);
	Instruction lda_z = decoder.getInstruction();
	ASSERT_EQ(lda_z, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_I);
	Instruction lda_i = decoder.getInstruction();
	ASSERT_EQ(lda_i, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_A);
	Instruction lda_a = decoder.getInstruction();
	ASSERT_EQ(lda_a, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_ZIIY);
	Instruction lda_ziiy = decoder.getInstruction();
	ASSERT_EQ(lda_ziiy, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_ZI);
	Instruction lda_zi = decoder.getInstruction();
	ASSERT_EQ(lda_zi, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_ZIX);
	Instruction lda_zix = decoder.getInstruction();
	ASSERT_EQ(lda_zix, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_ACCIY);
	Instruction lda_acciy = decoder.getInstruction();
	ASSERT_EQ(lda_acciy, Instruction::LDA);

	decoder.setOpCode((Byte) OpCode::LDA_AIX);
	Instruction lda_aix = decoder.getInstruction();
	ASSERT_EQ(lda_aix, Instruction::LDA);
}

TEST_F(W65C02STestInstructionDecoding, LDX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::LDX_I);
	Instruction ldx_i = decoder.getInstruction();
	ASSERT_EQ(ldx_i, Instruction::LDX);

	decoder.setOpCode((Byte) OpCode::LDX_Z);
	Instruction ldx_z = decoder.getInstruction();
	ASSERT_EQ(ldx_z, Instruction::LDX);

	decoder.setOpCode((Byte) OpCode::LDX_A);
	Instruction ldx_a = decoder.getInstruction();
	ASSERT_EQ(ldx_a, Instruction::LDX);

	decoder.setOpCode((Byte) OpCode::LDX_ZIY);
	Instruction ldx_ziy = decoder.getInstruction();
	ASSERT_EQ(ldx_ziy, Instruction::LDX);

	decoder.setOpCode((Byte) OpCode::LDX_AIY);
	Instruction ldx_aiy = decoder.getInstruction();
	ASSERT_EQ(ldx_aiy, Instruction::LDX);
}

TEST_F(W65C02STestInstructionDecoding, TAY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TAY);
	Instruction tay = decoder.getInstruction();
	ASSERT_EQ(tay, Instruction::TAY);
}

TEST_F(W65C02STestInstructionDecoding, TAX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TAX);
	Instruction tax = decoder.getInstruction();
	ASSERT_EQ(tax, Instruction::TAX);
}

TEST_F(W65C02STestInstructionDecoding, BCS_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BCS_P);
	Instruction bcs_p = decoder.getInstruction();
	ASSERT_EQ(bcs_p, Instruction::BCS);
}

TEST_F(W65C02STestInstructionDecoding, CLV_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CLV);
	Instruction clv = decoder.getInstruction();
	ASSERT_EQ(clv, Instruction::CLV);
}

TEST_F(W65C02STestInstructionDecoding, TSX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::TSX);
	Instruction tsx = decoder.getInstruction();
	ASSERT_EQ(tsx, Instruction::TSX);
}

TEST_F(W65C02STestInstructionDecoding, CPY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CPY_I);
	Instruction cpy_i = decoder.getInstruction();
	ASSERT_EQ(cpy_i, Instruction::CPY);

	decoder.setOpCode((Byte) OpCode::CPY_Z);
	Instruction cpy_z = decoder.getInstruction();
	ASSERT_EQ(cpy_z, Instruction::CPY);

	decoder.setOpCode((Byte) OpCode::CPY_A);
	Instruction cpy_a = decoder.getInstruction();
	ASSERT_EQ(cpy_a, Instruction::CPY);
}

TEST_F(W65C02STestInstructionDecoding, CMP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CMP_ZII);
	Instruction cmp_zii = decoder.getInstruction();
	ASSERT_EQ(cmp_zii, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_Z);
	Instruction cmp_z = decoder.getInstruction();
	ASSERT_EQ(cmp_z, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_I);
	Instruction cmp_i = decoder.getInstruction();
	ASSERT_EQ(cmp_i, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_A);
	Instruction cmp_a = decoder.getInstruction();
	ASSERT_EQ(cmp_a, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_ZIIY);
	Instruction cmp_ziiy = decoder.getInstruction();
	ASSERT_EQ(cmp_ziiy, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_ZI);
	Instruction cmp_zi = decoder.getInstruction();
	ASSERT_EQ(cmp_zi, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_ZIX);
	Instruction cmp_zix = decoder.getInstruction();
	ASSERT_EQ(cmp_zix, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_AIY);
	Instruction cmp_aiy = decoder.getInstruction();
	ASSERT_EQ(cmp_aiy, Instruction::CMP);

	decoder.setOpCode((Byte) OpCode::CMP_AIX);
	Instruction cmp_aix = decoder.getInstruction();
	ASSERT_EQ(cmp_aix, Instruction::CMP);
}

TEST_F(W65C02STestInstructionDecoding, INY_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::INY);
	Instruction iny = decoder.getInstruction();
	ASSERT_EQ(iny, Instruction::INY);
}

TEST_F(W65C02STestInstructionDecoding, DEX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::DEX);
	Instruction dex = decoder.getInstruction();
	ASSERT_EQ(dex, Instruction::DEX);
}

TEST_F(W65C02STestInstructionDecoding, WAI_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::WAI);
	Instruction wai = decoder.getInstruction();
	ASSERT_EQ(wai, Instruction::WAI);
}

TEST_F(W65C02STestInstructionDecoding, BNE_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BNE_P);
	Instruction bne_p = decoder.getInstruction();
	ASSERT_EQ(bne_p, Instruction::BNE);
}

TEST_F(W65C02STestInstructionDecoding, CLD_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CLD);
	Instruction cld = decoder.getInstruction();
	ASSERT_EQ(cld, Instruction::CLD);
}

TEST_F(W65C02STestInstructionDecoding, PHX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PHX_S);
	Instruction phx_s = decoder.getInstruction();
	ASSERT_EQ(phx_s, Instruction::PHX);
}

TEST_F(W65C02STestInstructionDecoding, STP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::STP);
	Instruction stp = decoder.getInstruction();
	ASSERT_EQ(stp, Instruction::STP);
}

TEST_F(W65C02STestInstructionDecoding, CPX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::CPX_I);
	Instruction cpx_i = decoder.getInstruction();
	ASSERT_EQ(cpx_i, Instruction::CPX);

	decoder.setOpCode((Byte) OpCode::CPX_Z);
	Instruction cpx_z = decoder.getInstruction();
	ASSERT_EQ(cpx_z, Instruction::CPX);

	decoder.setOpCode((Byte) OpCode::CPX_A);
	Instruction cpx_a = decoder.getInstruction();
	ASSERT_EQ(cpx_a, Instruction::CPX);
}

TEST_F(W65C02STestInstructionDecoding, SBC_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::SBC_ZII);
	Instruction sbc_zii = decoder.getInstruction();
	ASSERT_EQ(sbc_zii, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_Z);
	Instruction sbc_z = decoder.getInstruction();
	ASSERT_EQ(sbc_z, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_I);
	Instruction sbc_i = decoder.getInstruction();
	ASSERT_EQ(sbc_i, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_A);
	Instruction sbc_a = decoder.getInstruction();
	ASSERT_EQ(sbc_a, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_ZIIY);
	Instruction sbc_ziiy = decoder.getInstruction();
	ASSERT_EQ(sbc_ziiy, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_ZI);
	Instruction sbc_zi = decoder.getInstruction();
	ASSERT_EQ(sbc_zi, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_ZIX);
	Instruction sbc_zix = decoder.getInstruction();
	ASSERT_EQ(sbc_zix, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_AIY);
	Instruction sbc_aiy = decoder.getInstruction();
	ASSERT_EQ(sbc_aiy, Instruction::SBC);

	decoder.setOpCode((Byte) OpCode::SBC_AIX);
	Instruction sbc_aix = decoder.getInstruction();
	ASSERT_EQ(sbc_aix, Instruction::SBC);
}

TEST_F(W65C02STestInstructionDecoding, INX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::INX);
	Instruction inx = decoder.getInstruction();
	ASSERT_EQ(inx, Instruction::INX);
}

TEST_F(W65C02STestInstructionDecoding, NOP_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::NOP);
	Instruction nop = decoder.getInstruction();
	ASSERT_EQ(nop, Instruction::NOP);
}

TEST_F(W65C02STestInstructionDecoding, BEQ_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::BEQ_P);
	Instruction beq_p = decoder.getInstruction();
	ASSERT_EQ(beq_p, Instruction::BEQ);
}

TEST_F(W65C02STestInstructionDecoding, SED_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::SED);
	Instruction sed = decoder.getInstruction();
	ASSERT_EQ(sed, Instruction::SED);
}

TEST_F(W65C02STestInstructionDecoding, PLX_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::PLX_S);
	Instruction plx_s = decoder.getInstruction();
	ASSERT_EQ(plx_s, Instruction::PLX);
}

TEST_F(W65C02STestInstructionDecoding, UNDEFINED_Decoding)
{
	using namespace W65C02S;

	decoder.setOpCode((Byte) OpCode::UNDEFINED02);
	Instruction undef02 = decoder.getInstruction();
	ASSERT_EQ(undef02, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED03);
	Instruction undef03 = decoder.getInstruction();
	ASSERT_EQ(undef03, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED0b);
	Instruction undef0b = decoder.getInstruction();
	ASSERT_EQ(undef0b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED13);
	Instruction undef13 = decoder.getInstruction();
	ASSERT_EQ(undef13, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED1b);
	Instruction undef1b = decoder.getInstruction();
	ASSERT_EQ(undef1b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED22);
	Instruction undef22 = decoder.getInstruction();
	ASSERT_EQ(undef22, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED23);
	Instruction undef23 = decoder.getInstruction();
	ASSERT_EQ(undef23, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED2b);
	Instruction undef2b = decoder.getInstruction();
	ASSERT_EQ(undef2b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED33);
	Instruction undef33 = decoder.getInstruction();
	ASSERT_EQ(undef33, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED3a);
	Instruction undef3a = decoder.getInstruction();
	ASSERT_EQ(undef3a, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED42);
	Instruction undef42 = decoder.getInstruction();
	ASSERT_EQ(undef42, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED43);
	Instruction undef43 = decoder.getInstruction();
	ASSERT_EQ(undef43, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED44);
	Instruction undef44 = decoder.getInstruction();
	ASSERT_EQ(undef44, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED4b);
	Instruction undef4b = decoder.getInstruction();
	ASSERT_EQ(undef4b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED53);
	Instruction undef53 = decoder.getInstruction();
	ASSERT_EQ(undef53, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED54);
	Instruction undef54 = decoder.getInstruction();
	ASSERT_EQ(undef54, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED5b);
	Instruction undef5b = decoder.getInstruction();
	ASSERT_EQ(undef5b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED5c);
	Instruction undef5c = decoder.getInstruction();
	ASSERT_EQ(undef5c, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED62);
	Instruction undef62 = decoder.getInstruction();
	ASSERT_EQ(undef62, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED63);
	Instruction undef63 = decoder.getInstruction();
	ASSERT_EQ(undef63, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED6b);
	Instruction undef6b = decoder.getInstruction();
	ASSERT_EQ(undef6b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED73);
	Instruction undef73 = decoder.getInstruction();
	ASSERT_EQ(undef73, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED7b);
	Instruction undef7b = decoder.getInstruction();
	ASSERT_EQ(undef7b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED82);
	Instruction undef82 = decoder.getInstruction();
	ASSERT_EQ(undef82, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED83);
	Instruction undef83 = decoder.getInstruction();
	ASSERT_EQ(undef83, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED8b);
	Instruction undef8b = decoder.getInstruction();
	ASSERT_EQ(undef8b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED93);
	Instruction undef93 = decoder.getInstruction();
	ASSERT_EQ(undef93, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINED9b);
	Instruction undef9b = decoder.getInstruction();
	ASSERT_EQ(undef9b, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDa3);
	Instruction undefa3 = decoder.getInstruction();
	ASSERT_EQ(undefa3, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDab);
	Instruction undefab = decoder.getInstruction();
	ASSERT_EQ(undefab, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDb3);
	Instruction undefb3 = decoder.getInstruction();
	ASSERT_EQ(undefb3, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDbb);
	Instruction undefbb = decoder.getInstruction();
	ASSERT_EQ(undefbb, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDc2);
	Instruction undefc2 = decoder.getInstruction();
	ASSERT_EQ(undefc2, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDc3);
	Instruction undefc3 = decoder.getInstruction();
	ASSERT_EQ(undefc3, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDd3);
	Instruction undefd3 = decoder.getInstruction();
	ASSERT_EQ(undefd3, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDd4);
	Instruction undefd4 = decoder.getInstruction();
	ASSERT_EQ(undefd4, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDdc);
	Instruction undefdc = decoder.getInstruction();
	ASSERT_EQ(undefdc, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDe2);
	Instruction undefe2 = decoder.getInstruction();
	ASSERT_EQ(undefe2, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDe3);
	Instruction undefe3 = decoder.getInstruction();
	ASSERT_EQ(undefe3, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDeb);
	Instruction undefeb = decoder.getInstruction();
	ASSERT_EQ(undefeb, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDf3);
	Instruction undeff3 = decoder.getInstruction();
	ASSERT_EQ(undeff3, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDf4);
	Instruction undeff4 = decoder.getInstruction();
	ASSERT_EQ(undeff4, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDfb);
	Instruction undeffb = decoder.getInstruction();
	ASSERT_EQ(undeffb, Instruction::UNDEFINED);

	decoder.setOpCode((Byte) OpCode::UNDEFINEDfc);
	Instruction undeffc = decoder.getInstruction();
	ASSERT_EQ(undeffc, Instruction::UNDEFINED);
}
