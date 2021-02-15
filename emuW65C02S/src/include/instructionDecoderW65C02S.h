#pragma once
#include"insW65C02S.h"

namespace W65C02S
{
	class InstructionDecoder;
}

class W65C02S::InstructionDecoder
{
private:
	State clock;
	Byte opCode;

	const Byte ROW0 = 0x00;
	const Byte ROW1 = 0x02;
	const Byte ROW2 = 0x04;
	const Byte ROW3 = 0x06;
	const Byte ROW4 = 0x08;
	const Byte ROW5 = 0x0a;
	const Byte ROW6 = 0x0c;
	const Byte ROW7 = 0x0e;
	
	const Byte LOWER_HALF_MASK = 0x0e;
	const Byte UPPER_HALF_MASK = 0xe0;

	Instruction determineROW0Instruction();
	Instruction determineROW1Instruction();
	Instruction determineROW2Instruction();
	Instruction determineROW3Instruction();
	Instruction determineROW4Instruction();
	Instruction determineROW5Instruction();
	Instruction determineROW6Instruction();
	Instruction determineROW7Instruction();

public:
	const State& getClock() const { return clock; }
	
	void setClock(const State&);

	const Byte& getOpCode() const { return opCode; }

	void setOpCode(const Byte& opCode) { this->opCode = opCode; }

	Instruction getInstruction();

	AddressingMode getAddressingMode();
};
