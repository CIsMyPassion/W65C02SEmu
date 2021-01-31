#pragma once
#include<emu6502.h>

struct emu6502::StatusFlags
{
	Byte C : 1;			//1: carry flag
	Byte Z : 1;			//2: zero flag
	Byte I : 1;			//4: interrupt disable
	Byte D : 1;			//8: decimal mode
	Byte B : 1;			//16: break
	Byte Unused : 1;		//32: unused
	Byte V : 1;			//64: overflow
	Byte N : 1;			//128: negative
};
