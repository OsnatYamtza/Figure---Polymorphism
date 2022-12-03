#include "Circle.h"

Circle::Circle(const char *n, Point p, double k) :Square(n, p, k * 2) {}

double Circle:: Area()
{
	return getLength() / 2 * getLength() / 2 * pi;
}
double Circle::Perimeter()
{
	return getLength() / 2 * 2 * pi;
}
bool Circle:: isInside(Figure2D *P)
{
	if (P->getX()*P->getX() + P->getY()*P->getY() <= (getLength() / 2)*(getLength() / 2))
	{
		return true;
	}
	return false;
}
void Circle:: print()
{
	cout << "Circle " << getName() << " with center (" << getX() + getLength() / 2
		<< ", " << getY() + getHeight() / 2 << ") and radius = " << getLength() / 2 << endl;
}