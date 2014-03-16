#include "Pixel.h"

Pixel::Pixel()
{
	red = 0x00;
	green = 0x00;
	blue = 0x00;
}

void Pixel::setRed(byte value)
{
	red = checkBoundaries(value);
}

void Pixel::setGreen(byte value)
{
	green = checkBoundaries(value);
}

void Pixel::setBlue(byte value)
{

	blue = checkBoundaries(value);
}

byte Pixel::checkBoundaries(byte value)
{
	if(value > 0xFF){
		value = 0XFF;
	}

	return value;
}