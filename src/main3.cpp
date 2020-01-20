#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>


int main()
{
	DateTime date1(20, 01, 2020);
	string str = date1.getToday();
	cout << str << endl;
	str = date1.getFuture(9);
	cout << str << endl;
	str = date1.getPast(9);
	cout <<  str << endl;
	str = date1.getTomorrow();
	cout << str << endl;
	str = date1.getYesterday();
	cout << str << endl;


	DateTime date2(26, 11, 2019);
	cout << date1.getDifference(date2) << endl;

	return 0;
}