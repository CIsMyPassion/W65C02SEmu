#include"include/instructionDecoderW65C02S.h"

W65C02S::Instruction W65C02S::InstructionDecoder::getInstruction()
{

	Byte maskedOpCode = UPPER_HALF_MASK & opCode;

	if (maskedOpCode == ROW0)
	{
		return determineROW0Instruction();
	}
	else if (maskedOpCode == ROW1)
	{
		return determineROW1Instruction();
	}
	else if (maskedOpCode == ROW2)
	{
		return determineROW2Instruction();
	}
	else if (maskedOpCode == ROW3)
	{
		return determineROW3Instruction();
	}
	else if (maskedOpCode == ROW4)
	{
		return determineROW4Instruction();
	}
	else if (maskedOpCode == ROW5)
	{
		return determineROW5Instruction();
	}
	else if (maskedOpCode == ROW6)
	{
		return determineROW6Instruction();
	}
	else if (maskedOpCode == ROW7)
	{
		return determineROW7Instruction();
	}
	else
	{
		throw 1;
	}
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW0Instruction()
{
	if (opCode == (Byte) OpCode::BRK)
	{
		return Instruction::BRK;
	}
	else if (opCode == (Byte) OpCode::ORA_ZII ||
			opCode == (Byte) OpCode::ORA_ZIIY ||
			opCode == (Byte) OpCode::ORA_ZI ||
			opCode == (Byte) OpCode::ORA_Z ||
			opCode == (Byte) OpCode::ORA_ZIX ||
			opCode == (Byte) OpCode::ORA_I ||
			opCode == (Byte) OpCode::ORA_AIY ||
			opCode == (Byte) OpCode::ORA_AI ||
			opCode == (Byte) OpCode::ORA_AIX)
	{
		return Instruction::ORA;
	}
	else if (opCode == (Byte) OpCode::UNDEFINED02 ||
			opCode == (Byte) OpCode::UNDEFINED03 ||
			opCode == (Byte) OpCode::UNDEFINED0b ||
			opCode == (Byte) OpCode::UNDEFINED13 ||
			opCode == (Byte) OpCode::UNDEFINED1b)
	{
		return Instruction::UNDEFINED;
	}
	else if (opCode == (Byte) OpCode::TSB_Z ||
			opCode == (Byte) OpCode::TSB_AI)
	{
		return Instruction::TSB;
	}
	else if (opCode == (Byte) OpCode::ASL_Z ||
			opCode == (Byte) OpCode::ASL_ACC ||
			opCode == (Byte) OpCode::ASL_AI ||
			opCode == (Byte) OpCode::ASL_ZIX ||
			opCode == (Byte) OpCode::ASL_AIX)
	{
		return Instruction::ASL;
	}
	else if (opCode == (Byte) OpCode::RMB0_Z)
	{
		return Instruction::RMB0;
	}
	else if (opCode == (Byte) OpCode::PHP_S)
	{
		return Instruction::PHP;
	}
	else if (opCode == (Byte) OpCode::BBR0_P)
	{
		return Instruction::BBR0;
	}
	else if (opCode == (Byte) OpCode::BPL_P)
	{
		return Instruction::BPL;
	}
	else if (opCode == (Byte) OpCode::TRB_Z ||
			opCode == (Byte) OpCode::TRB_AI)
	{
		return Instruction::TRB;
	}
	else if (opCode == (Byte) OpCode::RMB1_Z)
	{
		return Instruction::RMB1;
	}
	else if (opCode == (Byte) OpCode::CLC)
	{
		return Instruction::CLC;
	}
	else if (opCode == (Byte) OpCode::INC_ACC)
	{
		return Instruction::INC;
	}
	else if (opCode == (Byte) OpCode::BBR1_P)
	{
		return Instruction::BBR1;
	}
	else
	{
		throw 1;
	}
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW1Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW2Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW3Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW4Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW5Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW6Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::Instruction W65C02S::InstructionDecoder::determineROW7Instruction()
{
	throw 1;
	return Instruction::LDA;
}

W65C02S::AddressingMode W65C02S::InstructionDecoder::getAddressingMode()
{
	return AddressingMode::Absolute;
}
