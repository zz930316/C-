// /*��Ŀ�����++a����*/
// /*�ȼ���ʹ�õ�++a������a++*/
//
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	Time();
//	Time(int,int);
//	Time operator++(); /*�ȼ���ʹ�õ�++a������a++*/
//	void display();
//private:
//	int miunte;
//	int sec;
//};
//
//Time::Time()
//{
//	miunte = 0;
//	sec = 0;
//}
//
//Time::Time(int m, int s)
//{
//	miunte = m;
//	sec = s;
//}
//
//Time Time::operator++()
//{
//	if (++sec>=60)     /*�ȼ���ʹ�õ�++a������a++*/
//	{
//		sec = 0;
//		++miunte;
//	}
//	return Time(miunte, sec);
//}
//
//void Time::display()
//{
//	cout << miunte << ":" << sec << endl;
//}
//
//int main()
//{
//	Time t1(34, 0);
//	int i = 0;
//	for (i = 0; i <= 60; i++)
//	{
//		++t1;
//		t1.display();
//	}
//	return 0;

