#include <iostream>
#include <cstdint>

using Byte = uint8_t;
using Word = uint16_t;

#define MAX_MEMORY 0xffff

typedef struct Memory
{
	Byte data[MAX_MEMORY + 1];


} Memory;

typedef struct CPU
{
	Word PC;	//program counter
	Byte S;		//stack pointer

	Byte A;		//accumulator register
	Byte X;		//x register
	Byte Y;		//y register

	Byte C : 1;	//carry flag
	Byte Z : 1;	//zero flag
	Byte I : 1;	//interrupt disable
	Byte D : 1;	//decimal mode
	Byte B : 1;	//break command
	Byte O : 1;	//overflow flag
	Byte N : 1;	//negative flag
	
	Memory memory;

} CPU;

int main()
{
	CPU cpu;
	std::cout << (int) cpu.memory.data[0] << std::endl;
	return 0;
}
