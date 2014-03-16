#ifndef PIXEL_H
#define PIXEL_H

typedef unsigned char byte;

class Pixel
{
	private:
		byte red, green, blue;
		byte checkBoundaries(byte value);

	public:
		Pixel();

		byte getRed() { return red; };
		byte getGreen() { return green; };
		byte getBlue() { return blue; };

		void setRed(byte value);
		void setGreen(byte value);
		void setBlue(byte value);
};

#endif