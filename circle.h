#ifndef CIRCLE_H 
#define CIRCLE_H 

#include "shape.h"

#include <string>
using std::string;
class Circle : public Shape{

private: 
	double radius; 

public:
	Circle (double r); 

	virtual double Area()const;
	virtual double Perimeter()const;
	virtual string ToString()const;
	
};


#endif
