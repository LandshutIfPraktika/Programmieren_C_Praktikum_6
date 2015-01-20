/*
 * main.cpp
 *
 *  Created on: 12.01.2015
 *      Author: georg
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;
using namespace sgheldd;

enum COLOUR rand_colour();
Shape *generate_Shape();

int main(int argc, char **argv)
{

	srand(time(0)); // use current time as seed for random generator
	int i;
	Shape *geo;

	for(i=0; i<100; i++)
	{
		geo=generate_Shape();
		geo->print();
		cout << endl;
		delete geo;
	}



	return 0;
}

enum COLOUR rand_colour()
{
	switch (rand() % 4)
	{
	case 0:
		return RED;
	case 1:
		return GREEN;
	case 2:
		return BLUE;
	case 3:
		return YELLOW;
	default:
		return NONE;
	}
}

Shape *generate_Shape()
{
	Shape *shape;
	float radius, length, width;
	enum COLOUR colour;

	switch (rand() % 3)
	{
	case 0:
	{
		radius = (float) (rand() % 4) + ((float) (rand() % 100) / 100.0);
		colour = rand_colour();
		shape = new Circle(radius, colour);
		return shape;
	}
	case 1:
	{
		length = (float) (rand() % 8 )+ ((float) (rand() % 100) / 100.0);
		colour = rand_colour();
		shape = new Rectangle(length, colour);
		return shape;
	}
	case 2:
	{
		length = (float) (rand() % 8 )+ ((float) (rand() % 100) / 100.0);
		width =  (float) (rand() % 8 )+ ((float) (rand() % 100) / 100.0);
		colour = rand_colour();
		shape = new Square(length, width, colour);
		return shape;
	}
	}
}
