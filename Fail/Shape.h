#pragma once
#include <iostream>


using namespace std;
class Shape {

public:

	Shape() {
		cout << "Shape constructor" << endl;
	}
	~Shape() {
		cout << "Shape destructor" << endl;
	}
	virtual float Area() = 0;
};



