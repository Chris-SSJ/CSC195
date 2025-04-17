#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(float w, float h) {
		m_width = w;
		m_height = h;
	}
	~Rectangle();
	float Area() override;
	float GetWidth() { return m_width; }
private:
	float m_width;
	float m_height;
};

