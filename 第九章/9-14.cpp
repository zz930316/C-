#include <iostream>
#include "fourteen.h"
using namespace std;

int main()
{
	fourteen<int> four;
	fourteen<int> fou(12, 56);
	cout << fou.max1() << endl;
	cout << fou.min1() << endl;
	return 0;
}