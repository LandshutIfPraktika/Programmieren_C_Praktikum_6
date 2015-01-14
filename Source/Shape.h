/*
 * Shape.h
 *
 *  Created on: 13.01.2015
 *      Author: georg
 */

#ifndef SHAPE_H_
#define SHAPE_H_

namespace sgheldd
{

#ifndef COLOUR_enum
#define COLOUR_enum
enum COLOUR
{
	NONE, RED, GREEN, YELLOW, BLUE
};
#endif /*Colour enum*/

class Shape
{
private:
	enum COLOUR colour;

public:
	Shape();
	virtual ~Shape();

	enum COLOUR get_colour();
	char *get_colour_s();

	void set_colour(enum COLOUR colour);

	virtual void print();
};

} /* namespace sgheldd */

#endif /* SHAPE_H_ */
