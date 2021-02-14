#pragma once

#include"typesW65C02S.h"

namespace W65C02S
{
	class ByteRegister;
	class WordRegister;
}

class W65C02S::ByteRegister
{
private:
	//internal data byte
	Byte data;

public:
	//get data
	const Byte& getByte() const { return data; }

	//set data
	void setByte(const Byte& byte) { data = byte; }
};

class W65C02S::WordRegister
{
private:
	//internal data word
	Word data;
public:
	//get data
	const Word& getWord() const { return data; }

	//set data
	void setWord(const Word& word) { data = word; }

	//get the high byte of the internal data
	const Byte& getHighByte();

	//set the high byte of the internal data
	void setHighByte(const Byte& byte);

	//get the low byte of the internal data
	const Byte& getLowByte();

	//set the low byte of the internal data
	void setLowByte(const Byte& byte);
};
