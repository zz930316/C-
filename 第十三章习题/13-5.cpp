// #include <fstream>
// #include <string>
// #include <iostream>
// using namespace std;
// 
// #define N sizeof(staf[0])
// 
// struct  staff
// {
// 	int num;
// 	char name[10];
// 	int age;
// 	float wage;
// 	friend fstream& operator<<(fstream& f, staff& s)
// 	{
// 		f << s.num << s.name << s.age << s.wage;
// 	}
// };
// 
// int main()
// {
// 	staff staf[5] = {
// 		101,"Liu",21,1000,
// 		102,"Wu",22,1200,
// 		103,"Zhang",23,1400,
// 		104,"Qi",24,1600,
// 		105,"Wang",25,1800
// 	};
// 	ofstream out1("f3.txt", ios::binary);
// 	if (!out1)
// 	{
// 		cout << "open f3 error!";
// 		exit(1);
// 	}
// 
// 	int i, j;
// 	for (i = 0; i < 5; i++)
// 	{
// 		out1.write((char*)&staf[i], N);
// 	}
// 
// 	staff sta[2];
// 	for (i = 0; i < 2; i++)
// 	{
// 		cin >> sta[i].num >> sta[i].name >> sta[i].age >> sta[i].wage;
// 		out1.write((char*)&sta[i], N);
// 	}
// 	out1.close();
// 
// 
// 	staff st[7];
// 	ifstream putin("f3.txt",ios::binary);
// 	if (!putin)
// 	{
// 		cout << "open f3 error!";
// 		exit(1);
// 	}
// 
// 
// 	for (i = 0; i < 7; i++)
// 	{
// 		putin.seekg(i*N, ios::beg);
// 		putin.read((char*)&st[i], N);
// 		cout << "num = " << st[i].num
// 			<< "  name = " << st[i].name
// 			<< "  age = " << st[i].age
// 			<< "  wage = " << st[i].wage << endl;
// 	}
// 
// 
// 
// 
// 	cout << "查找:" << endl;
// 	do
// 	{
// 		cin >> j;
// 		bool l = 0;
// 		for (i = 0; i < 7; i++)
// 		{
// 			if (j == st[i].num)
// 			{
// 				cout << "是第" << i+1 << "个员工" << endl;
// 				cout << "num = " << st[i].num
// 					<< "  name = " << st[i].name
// 					<< "  age = " << st[i].age
// 					<< "  wage = " << st[i].wage << endl;
// 				l = 1;
// 				break;
// 			}
// 		}
// 		if (l == 0)
// 		{
// 			cout << "没有这个人" << endl;
// 		}
// 	}while (j!=0);
// 
// 
// 
// 	putin.close();
// 	return 0;
// }
// 
// 
