#pragma once
#include <iostream>
#include "Point1.h"
using namespace std;

class Circle :public Point
{
public:
	Circle(float x = 0, float y = 0, float r = 0);
	void setRadius(float);
	float getRadius()const;
	float area()const;
	friend ostream &operator<<(ostream&, Circle&);
private:
	float radius;
};