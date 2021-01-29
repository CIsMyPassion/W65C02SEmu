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

struct emu6502::StatusFlags
{
	Byte C : 1;			//1: carry flag
	Byte Z : 1;			//2: zero flag
	Byte I : 1;			//4: interrupt disable
	Byte D : 1;			//8: decimal mode
	Byte B : 1;			//16: break
	Byte Unused : 1;	//32: unused
	Byte V : 1;			//64: overflow
	Byte N : 1;			//128: negative
};

struct emu6502::CPU
{
	Word PC;			//program counter
	Byte SP;			//stack pointer

	Byte A;				//accumulator register
	Byte X;				//x register
	Byte Y;				//y register

	union
	{
		Byte PS;
		StatusFlags Flags;
	};
};
