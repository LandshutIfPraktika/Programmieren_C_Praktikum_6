/*
 * Circle.h
 *
 *  Created on: 13.01.2015
 *      Author: georg
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

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

class Circle: public Shape
{
private:
	float radius;
//	enum COLOUR colour;

public:
	Circle();
	Circle(float radius, enum COLOUR colour);
	virtual ~Circle();

	float get_radius();

	void set_radius(float radius);

	float area();
	void print();

};

} /* namespace sgheldd */

#endif /* CIRCLE_H_ */
