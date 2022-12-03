#include "Square.h"

Square::Square(const char *n, Point P, double length) : Figure2D(length, length, P.getX(), P.getY())
{
	setName(n);
}

Square::Square(const char * Name, Point p1, Point p2)
	:Figure2D(p2.getX() - p1.getX(), p1.getY(), p1.getX(), p2.getY())
{
	setName(Name);
}

double Square:: Perimeter() 
{ 
	return getLength()*4;
}

double Square:: Area() 
{ 
	return getLength()*getLength();
}

ostream &operator<<(ostream &o, Square &S)
{
	cout << "Square " << S.getName() << " with center (" << S.getX() + S.getLength() / 2
		<< ", " << S.getY() + S.getHeight() / 2
		<< ") and side = " << S.getLength() << endl;
	return o;
}
void Square:: print()
{
	cout << "Square " << getName() << " with center (" << getX() + getLength() / 2
		<< ", " << getY() + getHeight() / 2
		<< ") and side = " << getLength() << endl;
}
bool Square:: isInside(Figure2D *P)
{
	if (P->getX() <= getX() + getHeight() / 2 - getHeight()
		&& P->getX() >= getX() + getHeight() / 2 + getHeight()
		&& P->getY() >= getY() + getHeight() / 2 - getHeight()
		&& P->getY() <= getY() + getHeight() / 2 + getHeight())
	{
		return true;
	}
	return false;
}

