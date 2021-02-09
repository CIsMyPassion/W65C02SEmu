#include"include/emuW65C02S.h"

void W65C02S::CPU::setPHI2(const State& state)
{
	PHI2.state = state;
	PHI2O.state = state;
	PHI1O.state = state == State::HIGH ? State::LOW : State::HIGH;
}
