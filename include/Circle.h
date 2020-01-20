#pragma once
const double pi = 3.1415;

class Circle {
	public:
		Circle(double radius);
		double getRadius();
		double getFerence();
		double getArea();
		void setRadius(double);
		void setFerence(double);
		void setArea(double);
	private:
		double radius; 
		double ference; 
		double area; 
};