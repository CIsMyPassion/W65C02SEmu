#pragma once
#include<cstdint>

namespace emu6502
{
	using Byte = uint8_t;
	using Word = uint16_t;

	using u32 = uint32_t;
	using s32 = int32_t;

	struct CPU;
	struct Memory;
	struct StatusFlags;
}
