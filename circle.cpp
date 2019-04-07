#include "shape.h"
#include "rectangle.h"
#include "circle.h"

#include <cmath>
#include <sstream>
#include <string>

using std::string;
using std::stringstream;
//
float pi = 3.14; 

double Circle::area() 
{
	return pi * radius * radius ; 
} 

void Circle::setRadius(double r) 
{ 
	if (r >= 0)
		radius = r; 
	else
		radius = 0; 
} 

double Circle::getRadius() 
{ 
	return radius; 
} 

double Circle::circumference() 
{ 
	return 2 * pi * radius; 
} 




