#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"
#include <string>
using std::string;

class Square : public Rectangle{

public:
	Square(double);
	virtual string ToString()const;
};


#endif
