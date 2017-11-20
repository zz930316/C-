// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a = 21;
// 	cout.setf(ios::showbase);
// 	cout << "dec:" << a << endl;
// 	cout.unsetf(ios::dec);
// 	cout.setf(ios::hex);
// 	cout << "hex:" << a << endl;
// 	cout.unsetf(ios::hex);
// 	cout.setf(ios::oct);
// 	cout << "oct:" << a << endl;
// 	cout.unsetf(ios::oct);
// 	char * p = "China";
// 	cout.width(10);
// 	cout << p << endl;
// 	cout.width(10);
// 	cout.fill('*');
// 	cout << p << endl;
// 	double pi = 22.0 / 7;
// 	cout << pi << endl;
// 	cout.setf(ios::uppercase);
// 	cout.setf(ios::scientific);
// 	cout << "pi = ";
// 	cout.width(14);
// 	cout << pi << endl;
// 	cout.unsetf(ios::uppercase);
// 	cout.unsetf(ios::scientific);
// 	cout.setf(ios::fixed);
// 	cout.width(12);
// 	cout.setf(ios::showpos);
// 	cout.setf(ios::internal);
// 	cout.precision(6);
// 	cout << pi << endl;
// 	return 0;
// }




// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a = 21;
// 	cout.setf(ios::showbase);
// 	cout << "dec:" << a << endl;
// 	cout.unsetf(ios::dec);
// 
// 	cout.setf(ios::hex);
// 	cout << "hex:" << a << endl;
// 	cout.unsetf(ios::hex);
// 
// 	cout.setf(ios::oct);
// 	cout << "oct:" << a << endl;
// 	cout.unsetf(ios::oct);
// 
// 	char * p = "China";
// 	cout.width(10);
// 	cout << p << endl;
// 
// 	cout.width(10);
// 	cout.fill('*');
// 	cout << p << endl;
// 
// 	double pi = 22.0 / 7;
// 	cout << pi << endl;
// 
// 	cout.setf(ios::uppercase|ios::scientific);
// 	cout << "pi = ";
// 	cout.width(14);
// 	cout << pi << endl;
// 
// 	cout.unsetf(ios::uppercase|ios::scientific);
// 
// 
// 	cout.setf(ios::fixed| ios::showpos | ios::internal);
// 	cout.width(12);
// 	cout.precision(6);
// 	cout << pi << endl;
// 	return 0;
// }