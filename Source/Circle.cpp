/*
 * Circle.cpp
 *
 *  Created on: 13.01.2015
 *      Author: georg
 */

#include "Circle.h"
#include <iostream>
using namespace std;
namespace sgheldd
{

Circle::Circle()
{
	this->radius = 0.0;
	this->set_colour(NONE);
}

Circle::Circle(float radius, enum COLOUR colour)
{
	this->radius = radius;
	this->set_colour(colour);
}

Circle::~Circle()
{
	// TODO Auto-generated destructor stub
}

float Circle::get_radius()
{
	return this->radius;
}

void Circle::set_radius(float radius)
{
	this->radius = radius;
}

float Circle::area()
{
	return this->radius * this->radius * 3.14159265359;
}

void Circle::print()
{
	cout << "Circle: " << endl;
	cout << "Area: " << this->area() << " Colour: " << this->get_colour_s()
			<< " Radius: " << this->get_radius() << endl;
}

} /* namespace sgheldd */
