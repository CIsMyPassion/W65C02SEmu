#pragma once
#include<stdint.h>

namespace W65C02S
{
	using Byte = uint8_t;
	using Word = uint16_t;

	enum State
	{
		LOW = 0x0,
		HIGH = 0x1
	};

	/* 
	 * all opcodes
	 *
	 * A
	 * AI
	 * AIX
	 * AIY
	 * ACC
	 * Z
	 * ZI
	 * ZII
	 * ZIX
	 * ZIY
	 * ZIIX
	 * ZIIY
	 * P
	 * S
	 */
	enum OpCode : Byte
	{
		BRK 		= 0x00,
		ORA_ZII		= 0x01,
		UNDEFINED02	= 0x02,
		UNDEFINED03	= 0x03,
		TSB_Z		= 0x04,
		ORA_Z		= 0x05,
		ASL_Z		= 0x06,
		RMB0_Z		= 0x07,
		PHP_S		= 0x08,
		ORA_I		= 0x09,
		ASL_ACC		= 0x0a,
		UNDEFINED0b	= 0x0b,
		TSB_AI		= 0x0c,
		ORA_AI		= 0x0d,
		ASL_AI		= 0x0e,
		BBR0_P		= 0x0f,
		
		BPL_P		= 0x10,
		ORA_ZIIY	= 0x11,
		ORA_ZI		= 0x12,
		UNDEFINED13	= 0x13,
		TRB_Z		= 0x14,
		ORA_ZIX		= 0x15,
		ASL_ZIX		= 0x16,
		RMB1_Z		= 0x17,
		CLC			= 0x18,
		ORA_AIY		= 0x19,
		INC_ACC		= 0x1a,
		UNDEFINED1b	= 0x1b,
		TRB_AI		= 0x1c,
		ORA_AIX		= 0x1d,
		ASL_AIX		= 0x1e,
		BBR1_P		= 0x1f,

		JSR_AI		= 0x20,
		AND_ZII		= 0x21,
		UNDEFINED22	= 0x22,
		UNDEFINED23	= 0x23,
		BIT_Z		= 0x24,
		AND_Z		= 0x25,
		ROL_Z		= 0x26,
		RMB2_Z		= 0x27,
		PLP_S		= 0x28,
		AND_I		= 0x29,
		ROL_ACC		= 0x2a,
		UNDEFINED2b	= 0x2b,
		BIT_A		= 0x2c,
		AND_A		= 0x2d,
		ROL_A		= 0x2e,
		BBR2_P		= 0x2f,

		BMI_P		= 0x30,
		AND_ZIIY	= 0x31,
		AND_ZI		= 0x32,
		UNDEFINED33	= 0x33,
		BIT_ZIX		= 0x34,
		AND_ZIX		= 0x35,
		ROL_ZIX		= 0x36,
		RMB3_Z		= 0x36,
		SEC			= 0x37,
		AND_AIY		= 0x38,
		DEC_A		= 0x39,
		UNDEFINED3a	= 0x3a,
		BIT_AIX		= 0x3b,
		AND_AIX		= 0x3c,
		ROL_AIX		= 0x3d,
		BBR3_P		= 0x3f,

		RTI_S		= 0x40,
		EOR_ZII		= 0x41,
		UNDEFINED42	= 0x42,
		UNDEFINED43	= 0x43,
		UNDEFINED44	= 0x44,
		EOR_Z		= 0x45,
		LSR_Z		= 0x46,
		RMB4_Z		= 0x47,
		PHA_S		= 0x48,
		EOR			= 0x49,
		LSR_ACC		= 0x4a,
		UNDEFINED4b	= 0x4b,
		JMP_A		= 0x4c,
		EOR_A		= 0x4d,
		LSR_A		= 0x4e,
		BBR4_P		= 0x4f,

		BVC_P		= 0x50,
		EOR_ZIIY	= 0x51,
		EOR_ZI		= 0x52,
		UNDEFINED53	= 0x53,
		UNDEFINED54	= 0x54,
		EOR_ZIX		= 0x55,
		LSR_ZIX		= 0x56,
		RMB5_Z		= 0x57,
		CLI			= 0x58,
		EOR_AIY		= 0x59,
		PHY_S		= 0x5a,
		UNDEFINED5b	= 0x5b,
		UNDEFINED5c	= 0x5c,
		EOR_AI_X	= 0x5d,
		LSR_AI_X	= 0x5e,
		BBR5_P		= 0x5f,

		RTS_S		= 0x60,
		ADC_ZIIX	= 0x61,
		UNDEFINED62	= 0x62,
		UNDEFINED63	= 0x63,
		STZ_Z		= 0x64,
		ADC_Z		= 0x65,
		ROR_Z		= 0x66,
		RMB6_Z		= 0x67,
		PLA_S		= 0x68,
		ADC_IA		= 0x69,
		ROR_ACC		= 0x6a,
		UNDEFINED6b	= 0x6b,
		JMP_AI		= 0x6c,
		ADC_A		= 0x6d,
		ROR_A		= 0x6e,
		BBR6_P		= 0x6f,

		BVS_P		= 0x70,
		ADC_ZIIY	= 0x71,
		ADC_ZI		= 0x72,
		UNDEFINED73	= 0x73,
		STZ_ZIX		= 0x74,
		ADC_ZIX		= 0x75,
		ROR_ZIX		= 0x76,
		RMB7_Z		= 0x77,
		SEI			= 0x78,
		ADC_AIY		= 0x79,
		PLY_S		= 0x7a,
		UNDEFINED7b	= 0x7b,
		JMP_AII		= 0x7c,
		ADC_AIX		= 0x7d,
		ROR_AIX		= 0x7e,
		BBR7_P		= 0x7f,

		BRA_P		= 0x80,
		STA_ZII		= 0x81,
		UNDEFINED82	= 0x82,
		UNDEFINED83	= 0x83,
		STY_Z		= 0x84,
		STA_Z		= 0x85,
		STX_Z		= 0x86,
		SMB0_Z		= 0x87,
		DEY			= 0x88,
		BIT			= 0x89,
		TXA			= 0x8a,
		UNDEFINED8b	= 0x8b,
		STY_A		= 0x8c,
		STA_A		= 0x8d,
		STX_A		= 0x8e,
		BBS0_P		= 0x8f,

		BCC_P		= 0x90,
		STA_ZIIY	= 0x91,
		STA_ZI		= 0x92,
		UNDEFINED93	= 0x93,
		STY_ZIX		= 0x94,
		STA_ZIX		= 0x95,
		STX_ZIX		= 0x96,
		SMB1_Z		= 0x97,
		TYA			= 0x98,
		STA_AIY		= 0x99,
		TXS			= 0x9a,
		UNDEFINED9b	= 0x9b,
		STZ_A		= 0x9c,
		STA_AIX		= 0x9d,
		STZ_AIX		= 0x9e,
		BBS1_P		= 0x9f,

		LDY			= 0xa0,
		LDA_ZII		= 0xa1,
		LDX			= 0xa2,
		UNDEFINEDa3	= 0xa3,
		LDY_Z		= 0xa4,
		LDA_Z		= 0xa5,
		LDX_Z		= 0xa6,
		SMB2_Z		= 0xa7,
		TAY			= 0xa8,
		LDA			= 0xa9,
		TAX			= 0xaa,
		UNDEFINEDab	= 0xab,
		LDA_ACC		= 0xac,
		LDA_A		= 0xad,
		LDX_A		= 0xae,
		BBS2_P		= 0xaf,

		BCS_P		= 0xb0,
		LDA_ZIIY	= 0xb1,
		LDA_ZI		= 0xb2,
		UNDEFINEDb3	= 0xb3,
		LDY_ZIX		= 0xb4,
		LDA_ZIX		= 0xb5,
		LDX_ZIY		= 0xb6,
		SMB3_Z		= 0xb7,
		CLV			= 0xb8,
		LDA_AIY		= 0xb9,
		TSX			= 0xba,
		UNDEFINEDbb	= 0xbb,
		LDY_AIX		= 0xbc,
		LDA_AIX		= 0xbd,
		LDX_AIY		= 0xbf,

		CPY			= 0xc0,
		CMP_ZII		= 0xc1,
		UNDEFINEDc2	= 0xc2,
		UNDEFINEDc3	= 0xc3,
		CPY_Z		= 0xc4,
		CMP_Z		= 0xc5,
		DEC_Z		= 0xc6,
		SMB4_Z		= 0xc7,
		INY			= 0xc8,
		CMP			= 0xc9,
		DEX			= 0xca,
		WAI			= 0xcb,
		CPY_AI		= 0xcc,
		CMP_AI		= 0xcd,
		DEC_AI		= 0xce,
		BBS4_P		= 0xcf,

		BNE_P		= 0xd0,
		CMP_ZIIY	= 0xd1,
		CMP_ZI		= 0xd2,
		UNDEFINEDd3	= 0xd3,
		UNDEFINEDd4	= 0xd4,
		CMP_ZIX		= 0xd5,
		DEC_ZIX		= 0xd6,
		SMB5_Z		= 0xd7,
		CLD			= 0xd8,
		CMP_AIY		= 0xd9,
		PHX_S		= 0xda,
		STP			= 0xdb,
		UNDEFINEDdb	= 0xdc,
		CMP_AIX		= 0xdd,
		DEX_AIX		= 0xde,
		BBS5_P		= 0xdf,

		CPX			= 0xe0,
		SBC_ZII		= 0xe1,
		UNDEFINEDe2	= 0xe2,
		UNDEFINEDe3	= 0xe3,
		CPX_Z		= 0xe4,
		SBC_Z		= 0xe5,
		INC_Z		= 0xe6,
		SMB6_Z		= 0xe7,
		INX			= 0xe8,
		SBC			= 0xe9,
		NOP			= 0xea,
		UNDEFINEDeb	= 0xeb,
		CPX_A		= 0xec,
		SBC_A		= 0xed,
		INC_A		= 0xee,
		BBS6_P		= 0xef,

		BEQ_P		= 0xf0,
		SBC_ZIIY	= 0xf1,
		SBC_ZI		= 0xf2,
		UNDEFINEDf3	= 0xf3,
		UNDEFINEDf4	= 0xf4,
		SBC_ZIX		= 0xf5,
		INC_ZIX		= 0xf6,
		SMB7_Z		= 0xf7,
		SED			= 0xf8,
		SBC_AIY		= 0xf9,
		PLX_S		= 0xfa,
		UNDEFINEDfa	= 0xfb,
		UNDEFINEDfb	= 0xfc,
		SBC_AIX		= 0xfd,
		INC_AIX		= 0xfe,
		BBS7_P		= 0xff
	};

	struct Pin;
	class CPU;
	class ByteRegister;
	class WordRegister;
	class InstructionDecoder;
}

struct W65C02S::Pin
{
	State state;
};

class W65C02S::ByteRegister
{
private:
	//internal data byte
	Byte data;

public:
	//get data
	const Byte& getByte() const { return data; }

	//set data
	void setByte(const Byte& byte) { data = byte; }
};

class W65C02S::WordRegister
{
private:
	//internal data word
	Word data;
public:
	//get data
	const Word& getWord() const { return data; }

	//set data
	void setWord(const Word& word) { data = word; }

	//get the high byte of the internal data
	const Byte& getHighByte();

	//set the high byte of the internal data
	void setHighByte(const Byte& byte);

	//get the low byte of the internal data
	const Byte& getLowByte();

	//set the low byte of the internal data
	void setLowByte(const Byte& byte);
};

class W65C02S::InstructionDecoder
{
private:
	Byte instruction;
};

class W65C02S::CPU
{
private:
	//address bus
	Pin A0, A1, A2, A3, A4,
		A5, A6, A7, A8, A9,
		A10, A11, A12, A13,
		A14, A15;
	
	//bus enable
	Pin BE;

	//data bus
	Pin D0, D1, D2, D3,
		D4, D5, D6, D7;

	//interrupt request
	Pin IRQB;

	//memory block
	Pin MLB;

	//non-maskable interrupt
	Pin NMIB;
	
	//phase 2 in
	Pin PHI2;

	//phase 2 out
	Pin PHI2O;

	//phase 1 out
	Pin PHI1O;

	//read/write
	Pin RWB;

	//ready
	Pin RDY;

	//reset pin
	Pin RESB;

	//set overflow
	Pin SOB;

	//synchronize with opcode fetch
	Pin SYNC;

	//vector pull
	Pin VPB;

	//accumulator
	ByteRegister accumulator;

	//index register x
	ByteRegister indexRegisterX;

	//index register y
	ByteRegister indexRegisterY;

	//stack point register
	ByteRegister stackPointRegister;

	//instruction register
	ByteRegister instructionRegister;

	//data bus buffer
	ByteRegister dataBusBuffer;

	//processor status register
	WordRegister processorStatusRegister;

public:
	//address bus
	const State& getA0() const { return A0.state; }
	const State& getA1() const { return A1.state; }
	const State& getA2() const { return A2.state; }
	const State& getA3() const { return A3.state; }
	const State& getA4() const { return A4.state; }
	const State& getA5() const { return A5.state; }
	const State& getA6() const { return A6.state; }
	const State& getA7() const { return A7.state; }
	const State& getA8() const { return A8.state; }
	const State& getA9() const { return A9.state; }
	const State& getA10() const { return A10.state; }
	const State& getA11() const { return A11.state; }
	const State& getA12() const { return A12.state; }
	const State& getA13() const { return A13.state; }
	const State& getA14() const { return A14.state; }
	const State& getA15() const { return A15.state; }
	
	//bus enable
	const State& getBE() const { return BE.state; }

	void setBE(const State& state) { BE.state = state; }
	
	//data bus
	const State& getD0() const { return D0.state; }
	const State& getD1() const { return D1.state; }
	const State& getD2() const { return D2.state; }
	const State& getD3() const { return D3.state; }
	const State& getD4() const { return D4.state; }
	const State& getD5() const { return D5.state; }
	const State& getD6() const { return D6.state; }
	const State& getD7() const { return D7.state; }

	void setD0(const State& state) { D0.state = state; }
	void setD1(const State& state) { D1.state = state; }
	void setD2(const State& state) { D2.state = state; }
	void setD3(const State& state) { D3.state = state; }
	void setD4(const State& state) { D4.state = state; }
	void setD5(const State& state) { D5.state = state; }
	void setD6(const State& state) { D6.state = state; }
	void setD7(const State& state) { D7.state = state; }

	//interrupt request
	const State& getIRQB() const { return IRQB.state; }
	
	void setIRQB(const State& state) { IRQB.state = state; }

	//memory lock
	const State& getMLB() const { return MLB.state; }
	
	//non-maskable interrupt
	const State& getNMIB() const { return NMIB.state; }

	void setNMIB(const State& state) { NMIB.state = state; }

	//phase 2 in
	const State& getPHI2() const { return PHI2.state; }
	
	void setPHI2(const State&);
	
	//phase 2 out
	const State& getPHI2O() const { return PHI2O.state; }
	
	//phase 1 out
	const State& getPHI1O() const { return PHI1O.state; }

	//read/write
	const State& getRWB() const { return RWB.state; }
	
	//ready
	const State& getRDY() const { return RDY.state; }

	void setRDY(const State& state) { RDY.state = state; }

	//reset
	const State& getRESB() const { return RESB.state; }

	void setRESB(const State& state) { RESB.state = state; }

	//set overflow
	const State& getSOB() const { return SOB.state; }

	void setSOB(const State& state) { SOB.state = state; }

	//synchronize with opcode fetch
	const State& getSYNC() const { return SYNC.state; }

	//vector pull
	const State& getVPB() const { return VPB.state; }

	void setVPB(const State& state) { VPB.state = state; }
};
