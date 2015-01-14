/*
 * Rectangle.cpp
 *
 *  Created on: 13.01.2015
 *      Author: georg
 */

#include <iostream>
#include "Rectangle.h"

namespace sgheldd
{

Rectangle::Rectangle()
{
	this->length = 0.0;
	this->set_colour(NONE);
}

Rectangle::Rectangle(float length, enum COLOUR colour)
{
	this->length = length;
	this->set_colour(colour);
}

Rectangle::~Rectangle()
{
	// TODO Auto-generated destructor stub
}

float Rectangle::get_length()
{
	return this->length;
}

void Rectangle::set_length(float length)
{
	this->length = length;
}

float Rectangle::area()
{
	return this->length * this->length;
}

void Rectangle::print()
{
	std::cout << "Rectangle:"<< std::endl;
	std::cout << "Area: " << this->area() << " Colour: " << this->get_colour_s()
			<< " Length: "<< this->get_length() << std::endl;
}

} /* namespace sgheldd */
