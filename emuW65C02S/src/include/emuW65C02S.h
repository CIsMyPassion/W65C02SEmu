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
	
	//reset pin
	Pin REST;
	
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

	void setReset(State);
};
