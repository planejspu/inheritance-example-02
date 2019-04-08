#include "shape.h"
#include "rectangle.h"
#include "circle.h"

#include <cmath>
#include <sstream>
#include <string>

using std::string;
using std::stringstream;
//
const double PI = 3.14159; 

Circle::Circle(double r) 
{
       radius=r; 	
} 

double Circle::Area()const{
	  
	return pow(radius,2)*PI;  
}
double Circle::Perimeter()const{
	return 2*PI*radius;
}
string Circle::ToString()const{
	stringstream retVal;
	retVal << Shape::ToString() << ": Circle: {radius : " << radius <<  "}";
	return retVal.str();
}




