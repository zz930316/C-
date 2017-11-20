//#include <iostream>		//3-4
//using namespace std;
//int main()
//{
//	int c1, c2;
//	c1 = getchar();
//	c2 = getchar();
//	putchar(c1);
//	putchar(' ');
//	putchar(c2);
//	putchar(10);
//	cout << c1 << ' ' << c2 << endl;
//	return 0;
//}


//#include <iostream>				//3-9
//using namespace std;
//int main()
//{
//	int a, b, c, m;
//	cin >> a >> b >> c;
//	m = a;
//	if (m < b)
//		m = b;
//	if (m < c)
//		m = c;
//	cout << m << endl;
//	return 0;
//}


//#include <iostream>			//3-10
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x;
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else if (x >= 10)
//		y = 3 * x - 11;
//	cout << y << endl;
//	return 0;
//}


//#include <iostream>			//3-11
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	if (x > 90)
//		cout << "成绩等级为A" << endl;
//	else if (x < 90 && x >= 80)
//		cout << "成绩等级为B" << endl;
//	else if (x < 80 && x >= 70)
//		cout << "成绩等级为C" << endl;
//	else if (x < 70 & x >= 60)
//		cout << "成绩等级为D" << endl;
//	else if (x < 60)
//		cout << "成绩等级为E" << endl;
//	return 0;
//}


#include <iostream>				//3-12
#include <iomanip>
using namespace std;

int main()
{
	int a = 10, b = 20, c;
	char *f;
	c = (int)(&(((char *)a)[b]));
	f = (char *)a;
	cout << c<<a<<b;
	return 0;
}