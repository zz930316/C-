// #include <iostream>
// #include <fstream>
// using namespace std;
// void getch()
// {
// 	char a[80];
// 	cin.getline(a, 50, '/');
// 	ofstream outfile2("F:\\f2.txt");
// 	if (!outfile2)
// 	{
// 		cout << "open f2 error!";
// 		exit(1);
// 	}
// 	for (int i = 0; a[i]!=0; i++)
// 	{
// 		outfile2 << a[i];
// 	}
// 	outfile2.close();
// }
// 
// void putch()
// {
// 	char b[80];
// 	ifstream inflie("F:\\f2.txt");
// 	if (!inflie)
// 	{
// 		cout << "open f2.. error!";
// 		exit(1);
// 	}
// 	ofstream outflie3("F:\\f3.txt");
// 	if (!outflie3)
// 	{
// 		cout << "open f3 error!";
// 		exit(1);
// 	}
// 	int i = 0;
// // 	for (i=0; inflie.get(b[i]); i++);
//    
// 
// 	for (i = 0; ; i++)
// 	{
// 		if (inflie.eof())
// 			break;
// 		inflie >> b[i];
// 	}
// 	
// 	b[i] = '\0';
// 	for (i=0;b[i]!=0;i++)
// 	{
// 		if (b[i] >= 97 && b[i] <= 122)
// 		{
// 			b[i] -= 32;
// 		}
// 		if (b[i]<=65&&b[i]>=90)
// 		{
// 			outflie3 << b[i];
// 		}
// 	}
// 	inflie.close();
// 	outflie3.close();
// }
// 
// 
// int main()
// {
// 	/*getch();*/
// 	putch();
// 	return 0;
// }











// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// 	char a[10],b[10];
// 	ofstream outfile2("F:\\f2.txt");
// 	if (!outfile2)
// 	{
// 		cout << "open f2 error!";
// 		exit(1);
// 	}
// 	ifstream inflie("F:\\f2.txt");
// 	if (!inflie)
// 	{
// 		cout << "open f2.. error!";
// 		exit(1);
// 	}
// 	ofstream outflie3("F:\\f3.txt");
// 	if (!outflie3)
// 	{
// 		cout << "open f3 error!";
// 		exit(1);
// 	}
// 	for (int i = 0; i < 10; i++)
// 	{
// 		cin >> a[i];
// 		outfile2 << a[i];
// 	}
// 	outfile2.close();
// 	cout << endl;
// 	for (int i = 0; i < 10; i++)
// 	{
// 		inflie >> b[i];
// 		cout << b[i];
// 		b[i] -= 32;
// 		cout << b[i];
// 		outflie3 << b[i];
// 	}
// 	inflie.close();
// 	outflie3.close();
// 	return 0;
// }