#pragma once
#include <iostream>
#include "Circle1.h"
using namespace std;

class Cylinder :public Circle
{
public:
	Cylinder(float x = 0, float y = 0, float radius = 0, float h = 0);
	void setHeight(float);
	float getHeight()const;
	float area() const;
	float volume()const;
	friend ostream& operator<<(ostream&, const Cylinder&);
private:
	float height;
};
