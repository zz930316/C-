#pragma once
#include <iostream>
using namespace std;
class five1
{
public:
	five1(int, double);
	~five1();
	static five1* max(five1*);
	void prin(five1*);
private:
	int num;
	double score;
};

