// 
// 
// //把“BASIC”倒序输出的三种输出方式
// 
// 
// #include <iostream>
// using namespace std;
// int main()
// {
// 
// 	cout.put('a').put('\n');
// 	cout << 'a' << endl;
// 	cout.put(65 + 32).put('\n');
// 	cout << 97 << endl;
// 
// 
// 
// 	char *p = "BASIC";
// 	char*q = p;
// 	for (int i = 4; i >= 0; i--)
// 	{
// 		cout<<(*(p + i));
// 	}
// 	cout << "\n";
// 
// 
// 
// 	p = q;
// 
// 	for (int i = 4; i >= 0; i--)
// 	{
// 		cout.put(*(p + i));
// 	}
// 	cout.put('\n');
// 
// 
// 	p = q;
// 
// 	for (int i = 4; i >= 0; i--)
// 	{
// 		putchar(*(p + i));
// 	}
// 	putchar('\n');
// 	return 0;
// }