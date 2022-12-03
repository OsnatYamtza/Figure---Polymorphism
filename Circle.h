#pragma once
#include "Square.h"
#include <math.h>
#define pi 3.14159265359

class Circle :public Square
{
public:
	Circle() {};
	Circle(const char *n, Point p, double k);
	~Circle() {}

	double Area();
	double Perimeter();
	bool isInside(Figure2D *P);
	void print();
};
