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
}
