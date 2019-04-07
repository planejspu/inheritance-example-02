#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using std::string;

class Shape{

public:
	Shape();
	virtual double Area()const = 0; // Setting these methods to be abstract methods
	virtual double Perimeter()const = 0;
	virtual string ToString()const;
};


#endif
