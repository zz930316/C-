// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// 	int  a[10],max,num=0,i;
// 	ifstream outfile("F:\F1.txt", ios::in | ios::_Nocreate);
// 	if (!outfile)
// 	{
// 		cout << "open error!" << endl;
// 		exit(1);
// 	}
// 	for (i=0;i<10;i++)
// 	{
// 		outfile >> a[i];
// 		cout << a[i] << " ";
// 	}
// 	max = a[0];
// 	for (i=0;i<10;i++)
// 	{
// 		if (a[i]>max)
// 		{
// 			max = a[i];
// 			num = i;
// 		}
// 	}
// 	cout << endl;
// 	cout << "num = " << num << endl << "Max = " << max << endl;
// 	outfile.close();
// 
// 	return 0;
// }