#include "cpu6502.h"

emu6502::s32 emu6502::CPU::execute(u32 cycles)
{
	return cycles - 1;
}
