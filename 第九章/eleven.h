#pragma once
#include<iostream>
using namespace std;
class eleven
{
public:
	eleven(int n, int a, float s) :num(n), age(a), score(s) {}
	~eleven();
	void total();
	static float average(eleven&);
	/*float average();*/
private:
	int num;
	int age;
	float score;
	static float sum;
	static int count;
};

