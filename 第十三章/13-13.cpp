// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// 
// struct Student
// {
// 	int num;
// 	string name;
// 	float score;
// };
// 
// int main()
// {
// 	//赋值
// 	Student stud[5] = { 101,"Li",60,102,"Qi",70,103,"We",80,104,"Er",90,105,"Rt",100 };
// 	//打开文件，打开的文件可读可写的二进制文件
// 	fstream ioflie("F:\\f3.txt", ios::out | ios::in | ios::binary);
// 		//判断打开情况
// 	if (!ioflie)
// 	{
// 		cout << "landekai" << endl;
// 		exit(1);
// 	}
// 	//调整文件指针到文件开头位置
// 	ioflie.write((char *)&stud[0], sizeof(stud));
// 	//新建对象
// 	Student stud1[5];
// 	//提取1,3，5，的内容
// 	for (int i = 0; i < 5; i += 2)
// 	{
// 		//改变文件中指针的位置，从文件开头移动多少个字节
// 		ioflie.seekg(i * sizeof(stud1[0]), ios::beg);
// 
// 		//从文件中写sizeof(stud[0])个字节到stud1[i / 2]中
// 		ioflie.read((char*)&stud1[i / 2], sizeof(stud[0]));
// 
// 		cout << "num=" << stud1[i / 2].num << "\nname=" << stud1[i / 2].name << "\nscore=" << stud1[i / 2].score << endl << endl;;
// 	}
// 	//改变3的内容
// 	stud1[1].num = 888;
// 	stud1[1].name = "FFFF"; 
// 	stud1[1].score = 6688;
// 
// 	//改变文件指针位置
// 	ioflie.seekp(2 * sizeof(stud[0]), ios::beg);
// 	//从stud1中写入sizeof(stud[0])个字节到文件
// 	ioflie.write((char *)& stud1[1], sizeof(stud[0]));
// 
// 
// 	cout << endl << endl;
// 	for (int i=0;i<5;i++)
// 	{
// 		ioflie.seekp(i * sizeof(stud1[0]), ios::beg);
// 		ioflie.read((char*)&stud1[i], sizeof(stud1[0]));
// 		cout << "num=" << stud1[i].num << "\nname=" << stud1[i ].name << "\nscore=" << stud1[i].score << endl;
// 	}
// 	ioflie.close();
// 	return 0;
// }