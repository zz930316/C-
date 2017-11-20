#pragma once
#include<iostream>
using namespace std;
template<class one>
class fourteen
{
public:
	fourteen(one a,one b);
	one max1();
	one min1();
private:
	one x, y;
};

template <class one>
fourteen <one> ::fourteen(one a, one b)
{
	x = a;
	y = b;
}


template <class one>
one fourteen<one>::max1()
{
	return x > y ? x : y;
}

template <class one>
one fourteen<one>::min1()
{
	return x < y ? x : y;
}