#include "six.h"
#include <iostream>
using namespace std;
void six::prin()
{
	cin >> length;
	cin >> width;
	cin >> height;
}
void six::shuchu()
{
	int i;
	i = length*width*height;
	cout << i << endl;
}