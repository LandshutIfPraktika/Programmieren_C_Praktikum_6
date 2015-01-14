/*
 * Square.h
 *
 *  Created on: 12.01.2015
 *      Author: georg
 */

#ifndef SQUARE_H_
#define SQUARE_H_

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

class Square: public Shape
{
private:
	float length;
	float width;
//	enum COLOUR colour;

public:
	Square();
	Square(float length, float width, enum COLOUR colour);
	virtual ~Square();

	float get_length();
	float get_width();


	void set_length(float length);
	void set_width(float width);


	float area();
	void print();

};

} /* namespace sgheldd */

#endif /* SQUARE_H_ */
