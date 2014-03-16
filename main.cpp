#include <iostream>
#include "Image.h"
using namespace std;

int main()
{
	int width = 5;
	int height = 5;
	Image *test = new Image(width, height);
	Pixel *pixel;

	// Set first row of pixels to red
	for(int i = 0; i < width; i++) {
		pixel = test->getPixel(1, i);
		pixel->setGreen(0);
		pixel->setBlue(0);
	}

	// Set second row of pixels to green
	for(int i = 0; i < width; i++) {
		pixel = test->getPixel(2, i);
		pixel->setRed(0);
		pixel->setBlue(0);
	}

	// Set third row of pixels to blue
	for(int i = 0; i < width; i++) {
		pixel = test->getPixel(3, i);
		pixel->setRed(0);
		pixel->setGreen(0);
	}

	// Draw a black border on bottom
	for(int i = 0; i < width; i++) {
		pixel = test->getPixel(height-1, i);
		pixel->setRed(0);
		pixel->setGreen(0);
		pixel->setBlue(0);
	}

	// Draw a black border on top
	for(int i = 0; i < width; i++) {
		pixel = test->getPixel(0, i);
		pixel->setRed(0);
		pixel->setGreen(0);
		pixel->setBlue(0);
	}

	// Draw a black border on left
	for(int i = 0; i < height; i++) {
		pixel = test->getPixel(i, 0);
		pixel->setRed(0);
		pixel->setGreen(0);
		pixel->setBlue(0);
	}

	// Draw a black border on right
	for(int i = 0; i < width; i++) {
		pixel = test->getPixel(i, width - 1);
		pixel->setRed(0);
		pixel->setGreen(0);
		pixel->setBlue(0);
	}

	test->saveToPPM("test.ppm");

	return 0;	
}