#pragma once
#include <iostream>
using namespace std;
class Date;
class thirteen
{
public:
	thirteen(int h, int m, int s) :hour(h), miunth(m), sec(s) {}
	~thirteen();
	void display(Date&);
private: 
	int hour;
	int miunth;
	int sec;
};
class Date
{
public:
	Date(int m, int d, int y) :month(m), day(d), year(y) {}
	friend void thirteen::display(Date&);
private:
	int month;
	int day;
	int year;
};
