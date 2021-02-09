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

	enum OpCode : Byte
	{
		BRK 		= 0x00,
		ORA_Z_II	= 0x01,
		Undefined02	= 0x02,
		Undefined03	= 0x03,
		TSB_Z		= 0x04,
		ORA_Z		= 0x05,
		ASL_Z		= 0x06,
		RMB0_Z		= 0x07,
		PHP_S		= 0x08,
		ORA_I		= 0x09,
		ASL_ACC		= 0x0a,
		Undefined0b	= 0x0b,
		TSB_AI		= 0x0c,
		ORA_AI		= 0x0d,
		ASL_AI		= 0x0e,
		BBR0_P		= 0x0f,
		
		BPL_P		= 0x10,
		ORA_Z_II_Y	= 0x11,
		ORA_Z_I		= 0x12,
		Undefined13	= 0x13,
		TRB_Z		= 0x14,
		ORA_Z_I_X	= 0x15,
		ASL_Z_I_X	= 0x16,
		RMB1_Z		= 0x17,
		CLC			= 0x18,
		ORA_A_I_Y	= 0x19,
		INC_ACC		= 0x1a,
		Undefined1b	= 0x1b,
		TRB_AI		= 0x1c,
		ORA_A_I_X	= 0x1d,
		ASL_A_I_X	= 0x1e,
		BBR1_P		= 0x1f,

		JSR_AI		= 0x20,
		AND_Z_II_Y	= 0x21,
		Undefined22	= 0x22,
		Undefined23	= 0x23,
		BIT_Z		= 0x24,
		AND_Z		= 0x25,
		ROL_Z		= 0x26,
		RMB2_Z		= 0x27,
		PLP_S		= 0x28,
		AND_I		= 0x29,
		ROL_ACC		= 0x2a,
		Undefined2b	= 0x2b,
		BIT_A		= 0x2c,
		AND_A		= 0x2d,
		ROL_A		= 0x2e,
		BBR3_P		= 0x2f
	};

	struct Pin;
	class CPU;
}

struct W65C02S::Pin
{
	State state;
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
