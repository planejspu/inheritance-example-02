#ifndef CIRCLE_H 
#define CIRCLE_H 

#include "shape.h"

#include <string>
using std::string;
class Circle : public Shape{

private: 
	double radius; 

public:
	double area() ; 
	void setRadius(double r); 
	double getRadius(); 
	double circumference(); 
	
};


#endif
