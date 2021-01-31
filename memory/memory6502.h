#pragma once
#include<emu6502.h>

struct emu6502::Memory
{
	static constexpr u32 MEM_SIZE = 1024 * 64;
	Byte data[MEM_SIZE];

	void init()
	{
		for (u32 i = 0; i < MEM_SIZE; i++)
		{
			data[i] = 0;
		}
	}

	Byte operator[](u32 address) const
	{
		return data[address];
	}

	Byte& operator[](u32 address)
	{
		return data[address];
	}
};
