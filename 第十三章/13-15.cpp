// #include <iostream>
// #include <strstream>
// #include <string>
// using namespace std;
// struct stru 
// {
// 	int num;
// 	string name;
// 	float score;
// };
// 
// int main()
// {
// // 	stru s[5] = { 101,"Li",60,102,"Qi",70,103,"We",80,104,"Er",90,105,"Rt",100 };
// // 	char t[50];
// // 	ostrstream out(t,40);
// // 	for (int i=0;i<5;i++)
// // 	{
// // 		out << s[i].num << s[i].name << s[i].score;
// // 	}
// // 	out << ends;
// // 
// // 	cout << endl << endl << t << endl;
// 	
// 	char b[100] = " 10 20 30 50 6 070 90 40 20 60 ";
// 	int  a[10] = {10,50,6,98,89,0};
// 	istrstream in(b, sizeof(b));
// 	for (int i = 0; i < 10; i++)
// 	{
// 		/*in >> a[i];*/
// 		cout << a[i] << endl;
// 	}
// 	return 0;
// }
// 
// 
// 
// #include <iostream>
// #include <strstream>
// using namespace std;
// int main()
// {
// 	char a[25] = "20 12 65 78 45 32 23.6";
// 	int b[30];
// 	char c[30];
// 	istrstream strin(a, sizeof(a));
// 	ostrstream strout(a, sizeof(b));
// 	for (int i=0;i<10;i++)
// 	{
// 		strin >> b[i];
// 		cout << b[i] << endl;
// 		strout << c[i];
// 	}
// 
// 	strout << ends;
// 
// 	for (int i = 0; i < 10; i++)
// 		cout << c[i] << endl;
// 
// 	return 0;
// }