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

Circle::Circle(double r) 
{
       radius=r; 	
} 

double Circle::Area()const{
	  
	return pow(pi*radius,2);  
}
double Circle::Perimeter()const{
	return 2*pi*radius;
}
string Circle::ToString()const{
	stringstream retVal;
	retVal << Shape::ToString() << ": Circle: {radius : " << radius <<  "}";
	return retVal.str();
}




