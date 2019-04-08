#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void ToString(const Shape& s){
	cout << s.ToString() << endl;
}

int main(){
	vector<Shape*> shapes;

	shapes.push_back(new Rectangle(5, 2));
	shapes.push_back(new Square(5));
	shapes.push_back(new Rectangle(1, 3));
	shapes.push_back(new Circle(9));
	// shapes.push_back(string("Hello")); will not compile because string "is not a" Shape

	Rectangle* r;

	for (size_t i = 0; i < shapes.size(); i++) {
		cout << shapes[i]->ToString() << endl;
		cout << shapes[i]->Area() << endl;
		cout << shapes[i]->Perimeter() << endl;
		r = dynamic_cast<Rectangle*>(shapes[i]);
		if (r != nullptr){
			cout << r->Diagonal() << endl;
		}
		//cout << shapes[i]->Diagonal() << endl;
	}

	for (size_t i = 0; i < shapes.size(); i++) {
		delete shapes.at(i);
	}
	cout << "--------------------------------" << endl << endl;
	ToString(Rectangle(3, 4));
	ToString(Square(8));

	return 0;
}
