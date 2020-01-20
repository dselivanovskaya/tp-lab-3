#pragma once
using namespace std;
#include <string>

class DateTime {
public:
	DateTime(int day, int month, int year);
	DateTime(const DateTime&);
	DateTime();

	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime&);

private:
	tm date;
};