/*
 * Shape.cpp
 *
 *  Created on: 13.01.2015
 *      Author: georg
 */

#include "Shape.h"
#include<iostream>


using namespace std;
namespace sgheldd
{

Shape::Shape()
{
	this->colour = NONE;
}

Shape::~Shape()
{
	// TODO Auto-generated destructor stub
}

enum COLOUR Shape::get_colour()
{
	return this->colour;
}

void Shape::set_colour(enum COLOUR colour)
{
	this->colour = colour;
}

string Shape::get_colour_s()
{
	switch(this->colour)
	{
	case 0: return "None";
	case 1: return "Red ";
	case 2: return "Green";
	case 3: return "Yellow";
	case 4: return "Blue";
	default: return "None";
	}
}

void Shape::print()
{
	cout << "Shape:" << endl;
	cout << "Colour: " << this->get_colour() << endl;
}

} /* namespace sgheldd */
