/*
 * Square.cpp
 *
 *  Created on: 12.01.2015
 *      Author: georg
 */

#include "Square.h"
#include <iostream>
using namespace std;
namespace sgheldd
{

Square::Square()
{
	this->length = 0.0;
	this->width = 0.0;
	this->set_colour(NONE);
}

Square::Square(float length, float width, enum COLOUR colour)
{
	this->length = length;
	this->width = width;
	this->set_colour(colour);
}

Square::~Square()
{
	// TODO Auto-generated destructor stub
}

float Square::get_length()
{
	return this->length;
}

float Square::get_width()
{
	return this->width;
}

void Square::set_length(float length)
{
	this->length = length;
}

void Square::set_width(float width)
{
	this->width = width;
}

float Square::area()
{
	return this->width * this->length;
}

void Square::print()
{
	cout << "Square:" << endl;
	cout << "Area: "<< this->area() << " Colour: " << this->get_colour_s()<< " Length: "
			<< this->get_length() << " Width: " << this->get_width()<< endl;
}

} /* namespace sgheldd */
