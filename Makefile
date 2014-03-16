image:
	g++ Image.cpp Pixel.cpp main.cpp -o test

PHONY: clean

clean:
	rm test
	rm *.ppm