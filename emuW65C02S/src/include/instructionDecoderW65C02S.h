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
	Byte instruction;

public:
	const State& getClock() const { return clock; }
	
	void setClock(const State&);

	const Byte& getInstruction() const { return instruction; }

	void setInstruction(const Byte& instruction) { this->instruction = instruction; }

};
