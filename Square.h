#pragma once
#include "Figure2D.h"
#include "Point.h"

class Square : public Figure2D
{
public:
	Square() {};
	Square(const char *n, Point P, double length);
	Square(const char * Name, Point p1, Point p2);
	~Square() {};

	double Perimeter();
	double Area();
	void print();
	bool isInside(Figure2D *P);
	friend ostream &operator<<(ostream &o, Square &S);
	
};
