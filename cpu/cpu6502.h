#pragma once
#include<../emu6502.h>

struct emu6502::CPU
{
	Word PC;			//program counter
	Byte SP;			//stack pointer

	Byte A;				//accumulator register
	Byte X;				//x register
	Byte Y;				//y register

	union
	{
		Byte PS;		//status flags
		StatusFlags Flags;
	}
};
