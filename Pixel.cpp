#include "Pixel.h"

Pixel::Pixel()
{
	red = 0x01;
	green = 0x02;
	blue = 0x03;
}

void Pixel::setRed(unsigned short int value)
{
	red = checkBoundaries(value);
}

void Pixel::setGreen(unsigned short int value)
{
	green = checkBoundaries(value);
}

void Pixel::setBlue(unsigned short int value)
{

	blue = checkBoundaries(value);
}

unsigned short int Pixel::checkBoundaries(unsigned short int value)
{
	if(value > 0xFF){
		value = 0XFF;
	}

	return value;
}