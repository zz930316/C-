
//注意abc的类型以及结果类型

// #include <iostream>
//using namespace std;
//int main()
//{
//	int a=8;
//	float b=2.0;
//	char c = 's';
//	cout << c + a + b << endl;
//	return 0;
//}



//输入流的控制符

//#include<iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	int b = 123456;
// 	cout << 1 << ' ' << b << endl;								//输出b的值
// 	cout << 2 << ' ' << hex << b << endl;						//把b的输出形式改变为十六进制了
//	cout << 3 << ' ' << hex << setiosflags(ios::uppercase) << b << endl;	//十六进制输出是按大写输出
//	cout << 1 << ' ' << dec << b << endl;						// 把b的输出形式改变回十进制
// 	cout << 4 << ' ' << setw(10) << b << ',' << b << endl;		// 设置里第一个b输出的字宽为10，
// 	cout << 5 << ' ' << setfill('*') << setw(10) << b << endl;	// *填补空白的字宽
//	cout << 6 << ' ' <<setiosflags(ios::showpos) << b << endl;	//当输出的整型为正数时，前面加上+
//	return 0;
//}



//例题3.1    各行小数点对齐

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	double a = 123.456, b = 3.14159, c = -3214;
//	//设置输出格式 ，
//	// setiosflags(ios::fixed) 小数点形式
//	// setiosflags(ios::right) 向右对齐
//	// setprecision(2) 小数点后只有两位
//	cout << setiosflags(ios::fixed) << setiosflags(ios::right) << setprecision(2);
//	// 输出字宽为10 setw(10)
//	cout << setw(10) << a << endl;
//	cout << setw(10) << b << endl;
//	cout << setw(10) << c << endl;
//	return 0;
//}



//‘\’转义字符，输出回车，但不换行，当前输入位置移到开头

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "123456sadasdad";
//	putchar('\015');			//重点，转义字符，输出回车，但不换行，当前输入位置移到开头，书上52页
//	cout << "ioiop" << endl;
//	cout << "sdds" << endl;
//	return 0;
//}



//测试   条件判断语句中的变量

//#include <iostream>			//测试   条件判断语句中的变量c
//#include <iomanip>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int a=1, b=2,c=8,d=4;
//	if (a <b)
//	{
//		int c ;
//		c = a + b;
//		cout << c;
//	}
//	cout << c;
//	return 0;
//}

