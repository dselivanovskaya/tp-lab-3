#include "Circle.h"
#include <cmath>

Circle::Circle(double rad) 
{
	radius = rad;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

double Circle::getRadius() 
{
	return radius;
}

double Circle::getFerence() 
{
	return ference;
}

double Circle::getArea() 
{
	return area;
}

void Circle::setRadius(double rad) 
{
	radius = rad;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setFerence(double fer)
{
	ference = fer;
	radius = ference / (2 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(double ar)
{
	area = ar;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}