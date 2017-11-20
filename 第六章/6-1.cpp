//#include <iostream>							//6.4
//using namespace std;
//int main()
//{
//	void exchange(int *, int *, int *);
//	int a, b, c, *p1, *p2, *p3;
//	cin >> a >> b >> c;
//	p1 = &a;p2 = &b;p3 = &c;
//	exchange(p1, p2, p3);
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}
//void exchange(int *q1, int *q2, int *q3)
//{
//	void swap(int *, int *);
//	if (*q1 < *q2)
//		swap(q1, q2);
//	if (*q1 < *q3)
//		swap(q1, q3);
//	if (*q2 < *q3)
//		swap(q2, q3);
//}
//void swap(int *pt1, int *pt2)
//{
//	int temp;
//	temp = *pt1;
//	*pt1 = *pt2;
//	*pt2 = temp;
//}



//#include <iostream>				//3-12
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int a = 10, b = 20, c;
//	char *f;
//	c = (int)(&(((char *)a)[b]));
//	f = (char *)a;
//	cout << c << a << b;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	char *name[] = { "basic","fortran","c++","pascall","cobol" };
//	char **p;
//	p = name + 2;
//	cout << *p << endl;
//	cout << **p << endl;
//	cout << *(*p + 1) << endl;
//	return 0;
//}


//6.8  const指针    P178页

//#include <iostream>
//using namespace std;
//void fn(const int *p);
//int main()
//{
//	int a = 10;
//	fn(&a);
//	return  0;
//}
//void fn(const int *p)
//{
//	*p = 5 * (*p);			//错误；
//	cout << *p;
//}



//6.9  void指针类型
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 3;
//	int *p1 = &a;
//	char *p2 = "new";
//	void *p3;
//	p3 = (void*)p1;
//
//	cout << *(int *)p3 << endl;
//	(int *)p3;
//	p2 = (char *)p3;
//	printf("%d", *p2);
//	return 0;
//}



#include <iostream>
using namespace std;
int main()
{
	void swap(int &, int &);
	int i = 3, j = 5;
	swap(i,j);
	cout << i << ' ' << j << endl;
	return 0;
}
void swap(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}