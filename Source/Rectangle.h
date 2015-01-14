/*
 * Rectangle.h
 *
 *  Created on: 13.01.2015
 *      Author: georg
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

namespace sgheldd
{

#ifndef COLOUR_enum
#define COLOUR_enum
enum COLOUR
{
	NONE, RED, GREEN, YELLOW, BLUE
};
#endif /*Colour enum*/

class Rectangle: public Shape
{
private:
	float length;
//	enum COLOUR colour;

public:
	Rectangle();
	Rectangle(float length, enum COLOUR colour);

	virtual ~Rectangle();

	float get_length();

	void set_length(float length);

	float area();
	void print();

};

} /* namespace sgheldd */

#endif /* RECTANGLE_H_ */
