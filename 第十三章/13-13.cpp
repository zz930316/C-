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
// 	//��ֵ
// 	Student stud[5] = { 101,"Li",60,102,"Qi",70,103,"We",80,104,"Er",90,105,"Rt",100 };
// 	//���ļ����򿪵��ļ��ɶ���д�Ķ������ļ�
// 	fstream ioflie("F:\\f3.txt", ios::out | ios::in | ios::binary);
// 		//�жϴ����
// 	if (!ioflie)
// 	{
// 		cout << "landekai" << endl;
// 		exit(1);
// 	}
// 	//�����ļ�ָ�뵽�ļ���ͷλ��
// 	ioflie.write((char *)&stud[0], sizeof(stud));
// 	//�½�����
// 	Student stud1[5];
// 	//��ȡ1,3��5��������
// 	for (int i = 0; i < 5; i += 2)
// 	{
// 		//�ı��ļ���ָ���λ�ã����ļ���ͷ�ƶ����ٸ��ֽ�
// 		ioflie.seekg(i * sizeof(stud1[0]), ios::beg);
// 
// 		//���ļ���дsizeof(stud[0])���ֽڵ�stud1[i / 2]��
// 		ioflie.read((char*)&stud1[i / 2], sizeof(stud[0]));
// 
// 		cout << "num=" << stud1[i / 2].num << "\nname=" << stud1[i / 2].name << "\nscore=" << stud1[i / 2].score << endl << endl;;
// 	}
// 	//�ı�3������
// 	stud1[1].num = 888;
// 	stud1[1].name = "FFFF"; 
// 	stud1[1].score = 6688;
// 
// 	//�ı��ļ�ָ��λ��
// 	ioflie.seekp(2 * sizeof(stud[0]), ios::beg);
// 	//��stud1��д��sizeof(stud[0])���ֽڵ��ļ�
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