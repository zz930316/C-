
//��Ŀ�����������
//һ������ֵ�ö���д��
//����a++��++a��д�����������βα��ж��һ��int
//	  ++a ��operator++()
//    a++��operator++(int)



//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time() { minute = 0; sec = 0; }
//	Time(int m, int s) :minute(m), sec(s) {}
//	Time operator++();
//	Time operator++(int);
//	void display();
//private:
//	int minute;
//	int sec;
//};
//
//Time Time::operator++()
//{
//	++sec;
//	if (sec >= 60)
//	{
//		sec -= 60;
//		++minute;
//	}
////  ����ֵ����дTime(minute,sec)��
////	Ҳ������ *this��
//	return Time(minute,sec);
//}
//
//Time Time::operator++(int)
//{
////	�½�һ��������������ֵ�����ú����Ķ����ֵ��*this��,
////  ����ʱ����ֱ�ӷ�������������ʽֵ��Ҳ���Բ��½���
//	Time time(*this);
//	sec++;
//	if (sec>=60)
//	{
//		sec -= 60;
//		++minute;
//	}
//	return time;
//}
//
//void Time::display()
//{
//	cout << minute << " " << sec << endl;
//}
//
//int main()
//{
//	Time time1(34, 59), time2;
//	time1.display();
//	cout << " ++time1:";
//	++time1;
//	time1.display();
//	cout << endl;
//	time2 = time1++;//�ȸ�ֵ�ڼ�һ��
//	time1.display();
//	cout << " time2++:";
//	time2.display();
//	cout << endl;
//	return 0;
//}