#include "shape.h"
#include "rectangle.h"

#include <cmath>
#include <sstream>
#include <string>
using std::string;
using std::stringstream;

Rectangle::Rectangle(double width, double height) : _width(width), _height(height){
}
double Rectangle::Area()const{
	return _width * _height;
}
double Rectangle::Perimeter()const{
	return 2 * _width + 2* _height;
}
string Rectangle::ToString()const{
	stringstream retVal;
	retVal << Shape::ToString() << ": Rectangle: {width: " << _width << ", height: " << _height <<  "}";
	return retVal.str();
}
double Rectangle::Diagonal()const{
	return sqrt(_width * _width + _height * _height);
}
