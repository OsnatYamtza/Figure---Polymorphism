#include "Figure2D.h"

Figure2D::Figure2D(Figure2D &f)
{
	this->setName(f.getName());
	this->length = f.getLength();
	this->height = f.getHeight();
	this->x = f.getX();
	this->y = f.getY();
}

Figure2D::Figure2D()
{
	length = 0 ;
	height = 0;
	x = 0;
	y = 0;
}
const Figure2D & Figure2D::operator=(Figure2D &d)
{
	this->length = d.length;
	this->height = d.height;
	this->x = d.x;
	this->y = d.y;
	setName(d.getName());
	return *this;
}

Figure2D::~Figure2D() {};

void Figure2D::Resize(double newL, double newH)
{
	this->length = newL;
	this->height = newH;
}

void Figure2D:: Scale(double kx, double ky)
{
	length = length * kx;
	height = height * ky;
}

void Figure2D::setName(const char * N)
{
	name = N;
}

double Figure2D::getX() { return x; }
double Figure2D::getY() { return y; }
const char * Figure2D::getName() { return name; }
double Figure2D::getLength() { return length; }
double Figure2D::getHeight() { return height; }
void Figure2D::Shift(double dx, double dy) 
{
	y = y + dy;
	x = x + dx;
}
void Figure2D::MoveTo(double newX, double newY)
{
	x = newX;
	y = newY;
}	

ostream & operator<<(ostream &o, Figure2D &S)
{
	cout << S.getName() << ": x=" << S.getX() << ", y=" << S.getY() << ", length=" <<
		S.getLength() << ", height=" << S.getHeight();
	return o;
}