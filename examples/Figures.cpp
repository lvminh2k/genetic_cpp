#include "Figures.h"
void Point2D::Set(double Xo, double Yo)
{
	X = Xo;
	Y = Yo;
}
void Point2D::Move(double dX, double dY)
{
	X += dX;
	Y += dY;
}

const double PI = 3.14159;
void Circle::Set(double Xo, double Yo, double r)
{
	Center.Set(Xo, Yo);	
	Radius = r;
}
void Circle::Move(double dX, double dY)
{
	Center.Move(dX, dY);
}
double Circle::Area(){
	return PI*Radius*Radius;
}
double Circle::Perimeter(){
	return 2*Radius;
}

