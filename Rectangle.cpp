#include "Rectangle.h"

Rectangle::Rectangle(const char * Name, Point p1, Point p2)
	:Figure2D(p2.getX() - p1.getX(), p1.getY(), p1.getX(), p2.getY())
{
	setName(Name);
}

void Rectangle:: print()
{
	cout << getName() << ": Point(" << getX() << ", " << getY() <<
		")-Point(" << getX() + getLength() << ", " << getY() + getHeight() << ")" << endl;
}

double Rectangle:: Area()
{
	return getHeight()*getLength();
}

double Rectangle:: Perimeter()
{
	return getHeight() * 2 + getLength() * 2;
}

bool Rectangle:: isInside(Figure2D *P)
{
	if (P->getX() >= getX() && P->getX() <= getX() + getLength()
		&& P->getY() >= getY() && P->getY() <= getY() + getHeight())
	{
		return true;
	}
	return false;
}
