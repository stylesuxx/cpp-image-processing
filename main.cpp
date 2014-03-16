#include <iostream>
#include "Image.h"
using namespace std;

int main()
{
	Image *test = new Image(5, 10);

	cout << "Width = " << test->getWidth() << "\n";
	cout << "Height = " << test->getHeight() << "\n";
	cout << "Pixels = " << test->getPixelAmount() << "\n";

	Pixel *first = test->getPixel(0, 0);
	cout << "1st Pixel: red=" << first->getRed() << ", green=" << first->getGreen() << ", blue=" << first->getBlue() << "\n"; 

	first->setBlue(5000);
	cout << "1st Pixel after change: red=" << first->getRed() << ", green=" << first->getGreen() << ", blue=" << first->getBlue() << "\n"; 	


	cout << "\nAll pixels:\n";
	for(int i=0; i< test->getPixelAmount(); i++) {
		Pixel *current = test->getPixel(i);

		cout << "[r=" << current->getRed() << ",g=" << current->getGreen() << ",b=" << current->getBlue() << "],";

		if(((i+1) % test->getWidth()) == 0) {
			cout << "\n";
		}
	}

	return 0;	
}