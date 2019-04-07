#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

#include <string>
using std::string;

class Rectangle: public Shape{
	double _width, _height;
public:
	Rectangle(double width, double height);
	virtual double Area()const;
	virtual double Perimeter()const;
	virtual string ToString()const;
	double Diagonal()const;

};


#endif
