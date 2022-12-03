#pragma once
#include "Figure2D.h"
#include "Point.h"

class Segment : public Figure2D
{
private:
	bool UpOrDown;
public:
	Segment() {};
	Segment(const char * Name, Point p1, Point p2) : Figure2D(p2.getX() - p1.getX(), p1.getY(), p1.getX(), p2.getY())
	{
		setName(Name);
		if (p1.getY() > p2.getY())
		{
			UpOrDown = true; // case down point
		}
		else
		{
			UpOrDown = false; // case up point
			MoveTo(p1.getX(), p1.getY());
		}
	}
	~Segment() {};

	void print()
	{
		cout << "Segment PQ: Point(" << getX() << ", " << getY() + getHeight() <<
			")-Point(" << getX() + getLength() << ", " << getY() << ")" << endl;
	}
	double Perimeter()
	{
		return sqrt((getLength()*getLength()) + (getHeight()*getHeight()));
	}
	double Area()
	{
		return 0;
	}
	bool isInside(Figure2D *P)
	{
		if (P->getX() >= getX() && P->getX() <= getX() + getLength() && P->getY() >= getY() && P->getY() <= getY() + getHeight())
		{
			return true;
		}
		return false;
	}

};