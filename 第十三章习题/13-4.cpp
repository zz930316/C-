// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// 	ofstream gout1("f1.txt");
// 	if (!gout1)
// 	{
// 		cout << "open f1 error!";
// 		exit(1);
// 	}
// 	ofstream pin("f2.txt");
// 	if (!pin)
// 	{
// 		cout << "open f2 error!";
// 		exit(1);
// 	}
// 	int a[20],b[10],i;
// 	for (i=0;i<20;i++)
// 	{
// 		cin >> a[i];
// 		if (i < 10)
// 			gout1 << a[i]<<' ';
// 		else if (i >= 10)
// 			pin << a[i]<<' ';
// 	}
// 	gout1.close();
// 	ifstream gout2("f1.txt");
// 	
// 
// 	for (i=0;i<10;i++)
// 	{
// 		gout2 >> b[i];
// 		pin << b[i]<<' ';
// 	}
// 	pin.close();
// 	gout2.close();
// 
// 	int c[20],j,tab;
// 	ifstream pin2("f2.txt");
// 	if (!pin2)
// 	{
// 		cout << "open f2-2 error!";
// 		exit(1);
// 	}
// 	for (i=0;i<20;i++)
// 	{
// 		pin2 >> c[i];
// 	}
// 	for (i=0;i<19;i++)
// 	{
// 		for (j = i + 1; j < 20; j++)
// 		{
// 			if (c[i] > c[j])
// 			{
// 				tab = c[i];
// 				c[i] = c[j];
// 				c[j] = tab;
// 			}
// 		}
// 	}
// 	pin2.close();
// 
// 	ofstream pin3("f2.txt",ios::trunc);
// 	for (i=0;i<20;i++)
// 	{
// 		pin3 << c[i]<<' ';
// 	}
// 	pin3.close();
// 	return 0;
// }
// 
// 
// /*12 56 89 78 45 23 02 32 65 98 87 54 21  19 26 49 05 82 9 17 3*/