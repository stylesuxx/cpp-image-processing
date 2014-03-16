#ifndef PIXEL_H
#define PIXEL_H

class Pixel
{
	private:
		unsigned short int red, green, blue;
		unsigned short int checkBoundaries(unsigned short int value);

	public:
		Pixel();

		unsigned short int getRed() { return red; };
		unsigned short int getGreen() { return green; };
		unsigned short int getBlue() { return blue; };

		void setRed(unsigned short int value);
		void setGreen(unsigned short int value);
		void setBlue(unsigned short int value);
};

#endif