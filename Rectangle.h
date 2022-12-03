#pragma once
#include "Figure2D.h"
#include "Point.h"

class Rectangle :public Figure2D
{
public:
	Rectangle() {};
	Rectangle(const char * Name, Point p1, Point p2);
	~Rectangle() {};
	
	void print();
	double Area();
	double Perimeter();
	bool isInside(Figure2D *P);
};
