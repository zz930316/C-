#pragma once
#include<iostream>
using namespace std;
class nine1
{
public:
	nine1(int n,int q,float p):num(n),quantity(q),price(p){}
	~nine1();
	static void average(nine1&);
	static void display();
private:
	int num;
	double price;
	int quantity;
	double sum1;
	static double aver;
	static double discount;
	static double sum;
	static int n;
};

