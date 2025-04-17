

#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	vector<Shape*> shapes;
	Circle* c = new Circle(1.0f);
	c->SetRadius(3.0f);
	Rectangle* r = new Rectangle(4.0f, 5.0f);
	shapes.push_back(c);
	shapes.push_back(r);
	for (int i = 0; i < shapes.size(); i++){

		if (shapes[i] == c) {
			cout << "Circle Area: " << c->Area() << endl;
			cout << "Circle radius: " << c->GetRadius() << endl;
		}
		else if (shapes[i] == r)
			cout << "Reactangle Area: " << r->Area() << endl;
			cout << "Rectangle width: " << r->GetWidth() << endl;
	}
	for (Shape* shape : shapes)
	{
		delete shape;
	}
	return 0;
}
