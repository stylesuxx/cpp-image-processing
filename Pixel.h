#ifndef PIXEL_H
#define PIXEL_H

#include "typedefs.h"

class Pixel
{
	private:
		byte red, green, blue;
		byte checkBoundaries(byte value);

	public:
		Pixel();

		byte getRed()   { return red; };
		byte getGreen() { return green; };
		byte getBlue()  { return blue; };

		void setRed(byte value)   { red = value; }
		void setGreen(byte value) { green = value; }
		void setBlue(byte value)  { blue = value; }
};

#endif