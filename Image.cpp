#include "Image.h"

Image::Image(int kWidth, int kHeight)
{
	width = kWidth;
	height = kHeight;
	pixels = new Pixel[width * height];
}

Pixel *Image::getPixel(int row, int column)
{
	return &pixels[row*width + column];
}


Pixel *Image::getPixel(int value)
{
	return &pixels[value];
}

Image::~Image()
{
	delete[] pixels;
}