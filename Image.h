#ifndef IMAGE_H
#define IMAGE_H

#include "Pixel.h"

class Image
{
	private:
		int width;
		int height;
		Pixel *pixels;

	public:
		Image(int kWidth, int kHeight);
		~Image();

		int getWidth() { return width; };
		int getHeight() { return height; };
		int getPixelAmount() { return height * width; };
		Pixel *getPixel(int row, int column);
		Pixel *getPixel(int value);
};

#endif