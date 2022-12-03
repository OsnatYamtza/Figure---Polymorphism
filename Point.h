#pragma once
#include"Figure2D.h"

class Point : public Figure2D
{
public:
	Point() {};
	Point(const char *n, double x, double y) : Figure2D(0, 0, x, y)
	{
		setName(n);
	}
	~Point() {}
	
	void Scale(double kx, double ky)
	{
		Figure2D::MoveTo(kx * getX(), getY()*ky);
		Figure2D::Scale(0, 0);

	}
	void Resize(double newL, double newH)
	{
		Figure2D::Resize(0, 0);

	}
	double Area()
	{
		return 0;
	}
	double Perimeter()
	{
		return 0;
	}
	bool isInside(Figure2D *P)//Point(P->getX(),P->getY()) lies inside the figure
	{
		if (P->getX() == this->getX() && P->getY() == this->getY())
		{
			return true;
		}
		return false;
	}
	void print()
	{
		cout << getName() << ": (" << getX() << ", " << getY() << ")" << endl;
	}

};
