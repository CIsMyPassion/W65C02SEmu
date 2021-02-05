#pragma once
#include"types6502.h"
#include"memory6502.h"
#include"statusFlags6502.h"

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
	};

	Memory memory;

	s32 execute(u32 cycles);
};
