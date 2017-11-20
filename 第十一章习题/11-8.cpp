//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A() { fPtr = new char[100]; cout << "constrcting A " << endl; }
//	~A() { delete [] fPtr; cout << "destructing A" << endl; }
//private:
//	char *fPtr;
//}; 
//class B:public A
//{
//public:
//	B() { cout << "constrcting B " << endl; }
//	~B() { cout << "destructing B" << endl; }
//};
//class C:public B
//{
//public:
//	C() { cout << "constrcting C " << endl; }
//	~C() { cout << "destructing C" << endl; }
//};
//
//int main()
//{
//	char *Ptr = new char[100];
//	C c1;
//	return 0;
//}