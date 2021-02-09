#include"include/emuW65C02S.h"

void W65C02S::CPU::setReset(State state)
{
	REST.state = state;
}
