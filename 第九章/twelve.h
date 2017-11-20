#pragma once
#include <iostream>
using namespace std;
class twelve
{
public:
	twelve(int ,int, int );
	~twelve();
	friend void display(twelve&);
private:
	int hour;
	int miunth;
	int sec;
};

