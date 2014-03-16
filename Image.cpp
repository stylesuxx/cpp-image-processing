#include <fstream>
#include "Image.h"

Image::Image(int kWidth, int kHeight)
{
	width = kWidth;
	height = kHeight;
	pixels = new Pixel[width * height];
}

Image::~Image()
{
	delete[] pixels;
}

Pixel *Image::getPixel(int row, int column)
{
	return &pixels[row*width + column];
}


Pixel *Image::getPixel(int value)
{
	return &pixels[value];
}

void Image::saveToPPM(const char *filename)
{
	std::ofstream ofs;
    ofs.open(filename);
    ofs << "P6\n" << width << " " << height << "\n255\n";
    for(int i = 0; i < getPixelAmount(); i++) {
		Pixel *current = getPixel(i);
   		ofs << current->getRed() << current->getGreen() << current->getBlue();
    }
    ofs.close();
}