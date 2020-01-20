#include "Circle.h"
#include "task1.h"

double calcDelta() 
{
	double answer;
	double EarthRadius = 6378.1;
	Circle * Earth = new Circle(EarthRadius);
	Earth->setFerence(Earth->getFerence() + 1);
	answer = Earth->getRadius() - EarthRadius;
	delete Earth;
	return answer;
}

double calcCost()
{
	double answer;
	double PoolRadius = 3;
	double CostCoating = 1000;
	double CostFence = 2000;
	double PoolPlusCoat = 4;
	Circle* Pool = new Circle(PoolRadius);
	Circle* PoolPlusCoating = new Circle(PoolPlusCoat);
	double CostF = (PoolPlusCoating->getFerence()) * CostFence;
	double CostC = (PoolPlusCoating->getArea() - Pool->getArea()) * CostCoating;
	answer = CostF + CostC;
	delete Pool;
	delete PoolPlusCoating;
	return answer;
}