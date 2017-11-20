#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
	Teacher(int n,string nam,  char s)
	{
		name = nam; num = n; sex = s;
	}
	virtual void display()
	{	
		cout << "num=" << num << endl;
		cout << "name=" << name << endl;
		cout << "sex=" << sex << endl;
	}
private:
	int num;
	string name;
	char sex;
};

class BirthDate
{
public:
	BirthDate(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
	void setB(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
	friend ostream& operator<<(ostream&output, BirthDate &b);
private:
	int year;
	int month;
	int day;
};

ostream& operator<<(ostream&output, BirthDate &b)
{
	output << "year = " << b.year << "\nmonth = " << b.month << 
		"\nday = " << b.day <<"\n------------------"<< endl;
	return output;
}

class Professor:public Teacher
{
public:
	Professor(int n, string nam, char s, int y, int m, int d) :Teacher(n, nam, s)
		, birthday(y,m,d) {}

	void setP(int y,int m,int d)
	{
		birthday.setB(y, m, d);
	}

	void display()
	{
		Teacher::display();
		cout << birthday;
	}
private:
	BirthDate birthday;
};

int main()
{                                                                                                                                                                                                                 

	Professor pro(1001, "Wang_li", 'f', 2017, 9, 7);
	pro.display();
	cout << "\n\n\n";
	pro.setP(2015, 01, 03);
	pro.display();
	return 0;
}  