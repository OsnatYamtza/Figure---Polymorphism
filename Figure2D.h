#pragma once
using namespace std;
#include <iostream>
#include <math.h>
class Figure2D {
private:
	double x;
	double y;
	double length;
	double height;
	const char *name = NULL;//=NULL Needed for compiler of the testing engine
public:
	Figure2D(double l, double h, double x = 0, double y = 0)
	{
		this->length = l;
		this->height = h;
		this->x = x;
		this->y = y;
	}
	Figure2D(Figure2D &f);
	Figure2D();
	virtual ~Figure2D() = 0;
	const Figure2D &operator=(Figure2D &d);
	void setName(const char *);
	double getX();
	double getY();
	double getLength();
	double getHeight();
	const char *getName();
	virtual double Area() = 0;
	virtual double Perimeter() = 0;
	void Shift(double dx, double dy);
	void MoveTo(double newX, double newY) ;
	virtual void Resize(double newL, double newH);
	virtual void Scale(double kx, double ky);
	virtual bool isInside(Figure2D *P) = 0;//Point(P->getX(),P->getY()) lies inside the figure
	virtual void print() = 0;
	friend ostream & operator<<(ostream &o, Figure2D &S);
};

