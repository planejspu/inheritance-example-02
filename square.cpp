#include "shape.h"
#include "rectangle.h"
#include "square.h"

#include <sstream>
#include <string>
using std::string;
using std::stringstream;


Square::Square(double side): Rectangle(side, side){

}
string Square::ToString()const{
		stringstream retVal;
		retVal << Rectangle::ToString() << ": Square" ;
		return retVal.str();
}
