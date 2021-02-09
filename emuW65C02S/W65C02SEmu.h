#pragma once
#include<stdint.h>

namespace W65C02S
{
	using Byte = uint8_t;

    enum State = {LOW = 0x0, HIGH = 0x1 };
	struct Pin;
	class CPU;
}

W65C02S::Pin
{
    State state;
}

W65C02S::CPU
{
	private:
	
	prublic:
	
};
