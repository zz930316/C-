#include <fstream>
#include <set>
#include <vector>
#include <iostream>
#include <string>
#include<list>
#include <deque>
#include <map>
using namespace std;

// class Human
// {
// public:
// 	typedef unsigned int size_type;
// 
// 	Human() { fSize = INT_MAX + 1; }
// 	size_type size() { return fSize; }
// private:
// 	size_type fSize;
// };

//int main()
//{
//	vector<int> iv;
//
//	for (int i = 0; i < 10; i++)
//		iv.push_back(i);
//	vector<int>::iterator iter = iv.begin();
//
//	cout << iv[5] << endl;
//	for (int i = 0; i < 10; i++)
//		cout << *iter++;
//	cout << endl;
//
// 	for (vector<int>::const_iterator iter1 = iv.begin(); iter1 != iv.end(); ++iter1)
// 	{
// 		cout << *iter1 << endl;
// 	}
// 	for (iter = iv.begin(); iter != iv.end(); ++iter)
// 	{
// 		cout << *iter;
// 		*iter = 0;
// 		cout << *iter;
// 		cout << endl;
// 	}
// 	iter = iv.begin();
// 
// 
// 
// 	string  word;
// 	vector<string> text;
// 	while (cin>>word)
// 	{
// 		text.push_back(word);	
// 		cout << text[2];
// 	}
// 
// // 	string a = "I a asd s!" ;
// // 	cout << a << endl;
// // 	string b("I a  s!");
// // 	cout << b << endl;
// // 	string c(10,'h');
// // 	cout << c << endl;
// // 	string d(a);
// // 	cout << d << endl;
// // 	vector<string> e(10,"qwe");
// // 	vector<string> w = e;
// // 	cout << w[9];
 //	return 0;
 //}

//// int main()
//{
//
//	const vector<int> iv(10,9);
//	vector<int>::const_iterator cit2 = iv.begin();
//	cout << *cit2;
//	
//	cout << *cit2;
//	return 0;
//}

							// struct Human
							// {
							// 	Human(int inAge, string inName):fAge(inAge),fName(inName) {}
							// 	int fAge;
							// 	string fName;
							// 	int GetAge() { return fAge; }
							// 	string GetName() { return fName; }
							// };
							// 
							// class People {};
							// 
							// 
							// void foo(string a)
							// {
							// 
							// }


// int main()
// {
							// 	int a = 3;
							// 	string tmp;
							// // 	foo(tmp);
							//  	foo("asd"); // "asd"-> string("asd") -> string a=string("asd")
							// 
							// 	vector<Human> humanVec;
							// 	humanVec.push_back(Human(10,"xiaoming"));
							// 	humanVec.push_back(Human(11, "xiaoli"));
							// 	humanVec.push_back(Human(15, "hong"));
							// 	for (size_t i = 0; i < humanVec.size(); ++i)
							// 		cout << humanVec[i].fAge << " " << humanVec[i].fName << endl;
							// 	list <int> l;
							// 	vector <string> v;
							// 	deque <char> q;
							// 	
							// 	for (int i = 0; i < 10; i++)
							// 		v.push_back("i");
							// 	vector<string>::iterator ve = v.begin() + v.size() / 2;
							// 	cout << (*ve).length() ; // ve->length(); ve->i
							// 	cout << endl;
							// 	vector<int>::size_type w;



	/*vector<string>V(v.begin(), v.end());
	vector<string>::iterator VE = V.begin();
	while (VE != V.end())
		cout << *VE++ << " ";
	cout << endl;

	char *words[] = { "stately","plump","buck","mulligan" };
	size_t words_size = sizeof(words) / sizeof(char*);
	list<string> words2(words, words + words_size);
	list<string>::iterator a = words2.begin();
	while (a!=words2.end())
		cout << *a++ << " ";
	cout << endl;*/

	/*const list<int>::size_type list_size = 64;
	list<int> ilist(list_size);

	vector<string> svec(4);
	vector<string>::const_iterator sve = svec.begin();
	while (sve!=svec.end())
	{
		cout << *sve++ << "1 ";
	}*/


// 	int ia[7] = { 0,1,2,3,4,5,6 };
// 	string sa[6] = {
// 		"AAA","BBB","CCC",
// 		"DDD","EEEE","FFFF" };
// 	vector<string> svec(sa, sa + 6);
// 	vector<string>::iterator sve = svec.begin();
// 	while (sve != svec.end())
// 		cout << *sve++ << " ";
// cout << endl;
// 	list<int> ilist(ia + 4, ia + 6);
// 	list<int>::iterator ilis = ilist.begin();
// 	while (ilis != ilist.end())
// 		cout << *ilis++ << " ";
// cout << endl;
// 	vector<int> ivec(ia, ia + 8);
// 	vector<int>::iterator ive = ivec.begin();
// 	while (ive != ivec.end())
// 		cout << *ive++ << " ";




// 	return 0;
// }



//int main()
//{
//	vector<string> svec;
//	list<string> slist;
//	string spouse("Beth");
//	string sarray[4] = { "quasi", "simba", "frollo", "scar" };
//
//	slist.insert(slist.end(), sarray, sarray + 4);
//	list<string>::iterator slist_iter = slist.begin();
//	while (slist_iter != slist.end())
//	{
//		cout << *slist_iter++ << " ";
//	}
//	cout << endl;
//
//	slist_iter = slist.begin();
//	slist.insert(slist_iter, sarray + 2, sarray + 4);
//	slist_iter = slist.begin();
//	while (slist_iter != slist.end())
//	{
//		cout << *slist_iter++ << " ";
//	}
//	cout << endl;
//
//	vector<int> v(1,1);
//	vector<int>::iterator first = v.begin();
//	while (*first != 2)
//	{
//		first = v.insert(first, 42);
//		cout << *first<< " ";
//		++first;
//		cout << *first << " ";
//		break;
//	}
//	first = v.begin();
//	while (first != v.end())
//		cout << *first++ << " ";
//	return 0;
//}



//int main()
//{
// 	list<int> llist;
// 	deque<int> oddDq,evenDq;
//
// 	for (int i=0;i<20;i++)
// 		llist.push_back(i);
// 	list<int>::iterator slist = llist.begin();
// 	while (slist!=llist.end())
// 	{
// 		cout << *slist << " ";
// 		if (*slist % 2)
//			oddDq.push_back(*slist);
// 		else
// 			evenDq.push_back(*slist);
// 		slist++;
// 	}
// 	cout << endl;
//	//�������deque��
// 	deque<int>::iterator ite = oddDq.begin();
// 	while (ite != oddDq.end())
// 	{
// 		cout << *ite++ << " ";
// 	}
// 	cout << endl;
//	//���ż��deque��
// 	deque<int>::iterator it = evenDq.begin();
// 	while (it != evenDq.end())
// 	{
// 		cout << *it++ << " ";
// 	}
// 	cout << endl;
//	return 0;
//}


// int main()
// {
// 	int a[5] = { 1,2,3,5,6 };
// 	vector<int> Sver(a, a + 5);
// 	vector<int>::reference val1 = Sver.front();
// 	val1 = Sver[0];
// 	cout << val1 << endl;
// 	val1 = Sver.at(3);
// 	cout << val1 << endl;
// 	val1 = Sver.front();
// 	cout << val1 << endl;
// 	val1 = Sver.back();
// 	cout << val1 << endl;
// 	val1 = Sver[1];
// 	cout << val1 << endl;
// 	val1 = Sver.at(0);
// 	cout << val1 << endl;




// 	slist = Slist.begin();
// 	vector<int> Sver2(Slist.begin(), Slist.end());
// 	if (Sver > Sver2)
// 		cout << "Sver��";
// 	else
// 		cout << "Sver2��";
// 	return 0;
//}




// int main()
// {
// 	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
// 	vector<int> svec(ia, ia + sizeof(ia) / sizeof(int));
// 	list<int> slist(ia, ia + sizeof(ia) / sizeof(int));
// 	vector<int>::iterator se = svec.begin();
// 	list<int >::iterator sli = slist.begin();
// // 	se = svec.begin();
// // 	while (se != svec.end())
// // 		cout << *se++ << " ";
// // 	cout << endl;
// // 	sli = slist.begin();
// // 	while (sli != slist.end())
// // 		cout << *sli++ << " ";
// // 	cout << endl;
// 
// // 	se = svec.begin();
// // 	sli = slist.begin();
// // 
// // 	for (int i=0;i<sizeof(ia)/sizeof(int);++i)
// // 	{
// // 		if ((*sli)% 2)
// // 		{
// // 			cout << *sli << " ";
// // 			sli = slist.erase(sli);
// // 		}	
// // 		else
// // 			sli++;
// // 	}
// // 	cout << endl;
// // 
// // 	for (int i = 0; i < sizeof(ia) / sizeof(int); ++i)
// // 	{
// // 		
// // 		if (!((*se) % 2))
// // 		{
// // 			cout << *se << " ";
// // 			se = svec.erase(se);
// // 		}
// // 		else
// // 			se++;
// // 	}
// // 		cout << endl;
// // 	se = svec.begin();
// // 	while (se != svec.end())
// // 		cout << *se++ << " ";
// // 	cout << endl;
// // 	sli = slist.begin();
// // 	while (sli != slist.end())
// // 		cout << *sli++ << " ";
// // 	cout << endl;
// 
// 	/*vector<int>  c1;
// 	c1 = svec;
// 	se = svec.begin();
// 	vector<int>::iterator c11 = c1.begin();
// 	while ( c11!= c1.end())
// 		cout << *c11++ << " ";
// 	cout << endl;
// 	bool a = c1.empty();
// 	bool b = svec.empty();
// 	cout << a << " " << b << endl;
// 	svec.erase(svec.begin(), svec.end());
// 	c1.insert(c1.begin(), svec.begin(), svec.end());
// 	bool c = c1.empty();
// 	bool d = svec.empty();
// 	cout << c << " " << b << endl;*/
// 
// 
// 	return 0;
// }


//int main()
//{
//	vector<int> ivec;
//	cout << "ivec: size: " << ivec.size()
//		<< " capacity: " << ivec.capacity() << endl;
//	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
//		ivec.push_back(ix); 
//	cout << "ivec: size: " << ivec.size()<< " capacity: " << ivec.capacity() << endl;
//	ivec.reserve(30);
//	while (ivec.size() != ivec.capacity())
//	{
//		ivec.push_back(5);
//	}
//	cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;
//	ivec.push_back(9);
//	cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;
//
//	return 0;
//}

// int main()
//{
//	vector<int> ivec;
//	cout << "ivec: size: " << ivec.size()
//		<< " capacity: " << ivec.capacity() << endl;
//	ivec.begin();
//	for (vector<int>::size_type ix = 50; ix != 94; ++ix)
//	{
//		ivec.push_back(ix);
//		cout << "ivec: size: " << ivec.size() <<
//			" capacity: " << ivec.capacity() << endl;
//	}
//	return 0;
//}

struct MyStruct
{
	int a;
	MyStruct *next;
};

#include <algorithm>
// 
// int main()
// {
//	int n, val;
//	cin >> n;
//	vector<int> iVec;
//	while (n--)
//	{
//		cin >> val;
//		iVec.push_back(val);
//	}
	////��̬��������
	//int a;
	//cin >> a;
	//int *b = new int[a];
	//for (int i=0;i<3;i++)
	//{
	//	cin >> a;
	//	b[i] = a;
	//}
	//for (int i=0;i<3;i++)
	//{
	//	cout << b[i] << " ";
	//}


////��������������Ҫ��ͷ�ļ�#include <algorithm>
//// 	sort(iVec.begin(), iVec.end());





//	//�����±�����
// 	for (int i = 0; i < iVec.size() - 1; ++i)
// 	{
// 		for (int j = i + 1; j < iVec.size(); ++j)
// 		{
// 			if (iVec[i] > iVec[j])
// 			{
// 				val = iVec[i];
// 				iVec[i] = iVec[j];
// 				iVec[j] = val;
// 			}
// 		}
// 	}
//	vector<int>::iterator it = iVec.begin();
//	while (it != iVec.end())
//		cout << *it++ << " ";
//	cout << endl;


/*	//��������
 	int num, value;
	MyStruct *mystruct= new MyStruct, *mystruct2,*front;;
	cout << "���������";
	cin >> num;
	cout << endl;
	cin >> value;
	mystruct->a = value;
	mystruct->next = NULL;
	int i = num-1;
	while (i--)
	{
		mystruct2 = new MyStruct;
		cin >> value;
		mystruct2->a = value;
		mystruct2->next = mystruct->next;
		mystruct->next = mystruct2;
	}
	
	for (front = mystruct; front!=NULL ; front = front->next)
	{
		for (mystruct2 = front->next; mystruct2!=NULL; mystruct2=mystruct2->next)
		{
			if ((front->a) > (mystruct2->a))
			{
				int tem = front->a;
				front->a = mystruct2->a;
				mystruct2->a = tem;
			}
		}
	}
	vector<int> svec;
	for ( front = mystruct; front != NULL; front =front->next)
		svec.push_back(front->a);
	vector<int>::iterator sv = svec.begin();
	while (sv!=svec.end())
		cout << *sv++ << " ";*/
//  	return 0;
//}


//int main()
//{
//	char*cp = "Hiya";
//	char c_array[] = "Wrold!!!!";
//	char no_null[] = { 'H','i' };
//	string s1(cp,2);
//	cout << s1 << endl;
//
//	string s2(c_array,5);
//	cout << s2 << endl;
//
//	string s3(c_array + 3, 5);
//	cout << s3 << endl;
//
//	string s4(no_null, 2);
//	cout << s4 << endl;
//
//	string s5(no_null);
//	cout << s5 << endl;
//
//	string s6(c_array, 10); 
//	cout << s6 << endl;
//
//	string s7(s2, 3);
//	cout << s7 << endl;
//
//	s7.insert(0, s6);
//	cout << s7 << endl;
//
//	return 0;
//}


//int main()
//{
//// 	string s = "some string";
//// 	string s2 = "some other string";
//// 	cout << s << endl << s2 << endl;
//// 	s.insert(s.begin(), s2.begin(),s2.end());
//// 	cout << s << endl;
//// 	s.insert(0, s2);
//// 	cout << s << endl;
//// 	s.clear();
//// 	s.insert(0, s2, 0, s2.size());
//// 	cout << s << endl;
//// 	s.erase(s.begin());
//// 	cout << s << endl;
//
//// 	s.append(s2);
//// 	cout << s << endl;
//// 	s.clear();
//// 
//// 	s.replace(0, s.size(), s2);
//// 	cout << s << endl;
//// 	s.clear();
//// 
//// 	s.append(s2);
//// 	cout << s << endl;
//// 	s.clear();
//// 	
//// 	s.replace(s.begin(), s.end(), s2);
//// 	cout << s << endl;
//// 	string::size_type pos1 = s.find("str");
//
// 	string numerics("0123456789");
// 	string name("r2d2");
//// 	string::size_type pos = name.find_first_of(numerics);
//// 	cout << "found number at index: " << pos
//// 		<< " element is " << name[pos] << endl;
//	
// 	string::size_type pos = 0;
// 	while ((pos = name.find_first_of(numerics, pos))!= string::npos) 
// 	{
// 		cout << "found number at index: " << pos<< " element is "
//			<< name[pos] << endl;
// 		++pos; 
// 	}
//	
//	string numbers("0123456789");
//	string dept("0b714p3");
//	string::size_type pos = dept.find_first_not_of(numbers);
// 	cout << "found number at index: " << pos<< " element is " 
//		<< dept[pos] << endl;
//
//	return 0;
//}

 
 /*Exercise     9.38:
 ��֪������ string ����"ab2c3d7R4E6"
 ��д����Ѱ�Ҹ��ַ��������е������ַ���Ȼ����Ѱ��
 ���е���ĸ�ַ��������ְ汾��д�ó��򣺵�һ���汾
 ʹ�� find_first_of ���������ڶ����汾��ʹ��
 find_first_not_of ������*/
//int main()
//{
//	int a[10];
//	string s = "ab2c3d7R4E6";
//	string s2 = "0123456789";
//	string s3 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	string::size_type pos = 0;
//	for (int i=0;(pos=s.find_first_of(s2,pos))!=s.npos;i++)
//	{
//		a[i] = pos;
//		cout << pos << " " << s[pos] << "   ";
//		pos++;
//	}
//	cout << endl;
//	pos = 0;
//	for (int i = 0; (pos = s.find_first_of(s3, pos)) != s.npos; i++)
//	{
//		cout << pos << " " << s[pos] << "   ";
//		pos++;
//	}
//	cout << endl;
//	for (int i=0,j = 0;i<s.size();i++)
//	{
//		if (i != a[j])
//			cout << i<<" "<<s[i] << "  ";
//		else
//			j++;
//	}
//	cout << endl;
//
//	for (pos = 0; (pos = s.find_first_not_of(s3, pos)) != s.npos; pos++)
//		cout << pos << " " << s[pos]<<"  ";
//	cout << endl;
//	for (pos = 0; (pos = s.find_first_not_of(s2, pos))!=s.npos; pos++)
//		cout << pos << " " << s[pos] << "  ";
//
//	return 0;
//}





/*
��д������� sentence ���ж��ٸ����ʣ���ָ������
�����̵ĵ��ʡ�����ж�������̵ĵ��ʣ���
������ȫ�������
*/


 int main()
 {
 	string separators(" :\t,\v\r\n\f1234567890");
 	string line1 = "We were her pride of 10 she named us : ";
 	string line2 = "Benjamin, Phoenix, the Prodigal";
 	string line3 = "and perspicacious pacificSuzanne";
 	string sentence = line1 + ' ' + line2 + ' ' + line3;
 	string word;
 		//�����̣���һ�����ʳ��ȣ�������
 	string::size_type maxLen, minLen, wordLen,cnt = 0;
 		//��������̵��ʵ�����
 	vector<string> longestWords, shortestWords;
 	cout << sentence <<endl;
 		//���ʵ���ʼλ�úͽ���λ��
 	string::size_type startPos = 0, endPos = 0;
 		//ÿ��ѭ������sentence�е�һ������
 		//�ҵ���һ�����ʵ���ʼλ��
 	while ((startPos =sentence.find_first_not_of(separators, endPos)) !=string::npos)
 	{				
 		++cnt;
 			//�ҵ���һ�����ʵĽ���λ��
 		endPos = sentence.find_first_of(separators,startPos);
 		if (endPos == string::npos)
 				//�Ҳ�����һ���ָ�����λ�ã����õ���������һ������
 			wordLen = sentence.size() - startPos;
 		else
 				//�ҵ�����һ�����ַָ�����λ��	
 			wordLen = endPos - startPos;
 		word.assign(sentence.begin() + startPos,sentence.begin() + startPos + wordLen);//��ȡ����
 			//������һ�����ҵ���ʼλ��
 		startPos =sentence.find_first_not_of(separators, endPos);
 		if (cnt == 1)
 		{
 				//�ҵ����ǵ�һ������
 			maxLen = minLen = wordLen;
 			longestWords.push_back(word);
 			shortestWords.push_back(word);
 		}
 		else
 		{
 			if (wordLen > maxLen)//��ǰ���ʱ�Ŀǰ������ʻ���
 			{	
 				maxLen = wordLen;
 				longestWords.clear();//��մ������ʵ�����
 				longestWords.push_back(word);
 			}
 			else if (wordLen == maxLen)//��ǰ������Ŀǰ������ʵȳ�
 				longestWords.push_back(word);
 		
 			if (wordLen < minLen)
 			{
 					//��ǰ���ʱ�Ŀǰ����ʸ���
 				minLen = wordLen;
 				shortestWords.clear();//��մ����̵��ʵ�����
 				shortestWords.push_back(word);
 			}
 			else if (wordLen == minLen)
 			{
 					//��ǰ������Ŀǰ����̵��ʵȳ�
 				shortestWords.push_back(word);
 			}
 		}
 	}
 		// ���������
 	cout << "������ " << cnt << endl;
 	vector<string>::iterator iter;
 
 		// ��������
 	cout << "����� :" ;
 	iter = longestWords.begin();
 	while (iter != longestWords.end())
 		cout << *iter++ << endl;
 
 		//�����̵Ĵ�
 	cout << "��̵ĵ��� :";
 	iter = shortestWords.begin();
 	while (iter != shortestWords.end())
 		cout << *iter++ <<"  ";
 	system("pause");
 	return 0;
 }

// int main()
// {
// // 	char second_ed[] = "C++ Primer, 2nd Edition";
// // 	string third_ed("C++ Primer, 3rd Edition");
// // 	string fourth_ed("C++ Primer, 4th Edition");
// // 	string s;
// // 	getline(cin, s);
// // 	cout << s<< endl;
// // 	cin >> s;
// // 	cout << s << endl;
// 	typedef vector<int> VecStr;			// vector<string>
// 	typedef vector<VecStr> VecVecStr;		// vector<vector<string>>
// 	typedef vector<VecVecStr> VecVecVecStr;	// vector<vector<vector<string>>>
// 
// 	VecStr v1({ 1,2,3 }), v2({ 4,5,6 }), v3({ 7,8,9 }), v4({ 10,11,12 });
// 	VecVecStr vv1, vv2;
// 	vv1.push_back(v1);
// 	vv1.push_back(v2);
// 	vv2.push_back(v3);
// 	vv2.push_back(v4);
// 	VecVecVecStr vecvecvecstr;
// 	vecvecvecstr.push_back(vv1);
// 	vecvecvecstr.push_back(vv2);
// 	for (VecVecVecStr::iterator it = vecvecvecstr.begin(); it != vecvecvecstr.end(); ++it)
// 		for (VecVecStr::iterator it2 = it->begin(); it2 != it->end(); ++it2)
// 			for (VecStr::iterator it3 = it2->begin(); it3 != it2->end(); ++it3)
// 				cout << *it3 << " ";
// 
// // 	fourth_ed.compare(second_ed); 
// // 	fourth_ed.compare(fourth_ed.find("4th"), 3,	third_ed, third_ed.find("3rd"), 3);
// 	return 0;
// }


//int main()
//{
//// 	��д��������������� string ����
//// 		string q1(�� When lilacs last in the dooryard bloom'd��);
//// 	string q2(��The child is father of the man��);
//// 	Ȼ��ʹ�� assign �� append ���������� string ����
//// 		string sentence(��The child is in the dooryard��);
//	string q1(" When lilacs last in the dooryard bloom'd");
//	string q2("The child is father of the man");
//	string sentence;
//	string::iterator qq2 = q2.begin()+q2.find("father");
//	cout << *qq2 << endl;
//	q2.erase(qq2, q2.end());
//	sentence.assign(q2);
//	cout << sentence << endl;
//	string::iterator qq1 = q1.begin() + q1.find("in");
//	cout << *qq1 << endl;
//	q1.erase(q1.begin(),qq1);
//	cout << q1 << endl; 
//	sentence.append(q1.substr(0, 15));
//	cout << sentence;
//	string q = "The child is in the dooryard";
//	cout << endl << q << endl;
//	return 0;
//}


// #include <stack>
//#include <queue>
//int main()
//{
//	queue<string, list<string> > s2;
//	priority_queue<string, list<string> > pr;
//	
//	const stack<int>::size_type stk_size = 10;
//	stack<int> intStack; 
//	int ix = 0;
//	while (intStack.size() != stk_size)
//		intStack.push(ix++); 
//	int error_cnt = 0;
//
//	while (intStack.empty() == false) {
//		int value = intStack.top();
//		if (value != --ix) {
//			cerr << "oops! expected " << ix
//				<< " received " << value << endl;
//			++error_cnt;
//		}
//		intStack.pop(); 
//	}
//	cout << "Our program ran with "<< error_cnt << " errors!" << endl;
//
//	return 0;
//}


/*
Exercise   9.42:
       ��д�������һϵ�е��ʣ� �������Ǵ洢�� stack �����С�
Exercise    9.43 :
	   ʹ�� stack �������Բ���ŵı��ʽ��������Բ����ʱ�� ������������ 
	Ȼ���������Ҽ�����ʱ�� ���� stack����������������֮������Ԫ�أ�������Բ���ţ���
	������ stack ������ѹ��һ��ֵ�� ���Ա��������һ��Բ�����������ı��ʽ�Ѿ����滻*/

//#include <stack>
//#include <queue>
//int main()
//{
//	// 	string s;
//	// 	stack<string> sta;
//	// 	while (cin >> s)
//	// 		sta.push(s);
//
//	stack<char> sExp,sQUE;
//	string strExp;
//		// ������ʽ
//	cin >> strExp;
//		string::iterator it = strExp.begin();
//	while (it != strExp.end())
//	{
//		if (*it != ')')
//			sExp.push(*it);
//		else
//		{
//			while (sExp.top() != '(' && !sExp.empty())
//				sExp.pop();
//			sExp.pop();
//			sExp.push('@');
//		}
//		++it;
//	}
//	// ��ʾ��ջ��Ԫ��
//	while (!sExp.empty())
//	{
//		sQUE.push(sExp.top());
//		sExp.pop();
//	}
//	while (!sQUE.empty())
//	{
//		cout << sQUE.top();
//		sQUE.pop();
//	}
//	system("pause");
//	return 0;
//}

//#include <vector>
//#include <utility>
//#include <stdlib.h>
//int main()
//{
//
//	
//	/*typedef pair<string, int> pa;*/
//	pair<string, int> p;
//	vector<pair<string, int> > v1;
//	string a1;
//	int a2;
//	while (cin >> a1 >> a2)
//	{
//		p = make_pair(a1, a2);
//		v1.push_back(p);
//	}
//
//// 	while (cin >> a1>> a2)
//// 	{
//// 		pa p(a1, a2);
//// 		v1.push_back(p);
//// 	}
//
//// 	while (cin>>p.first>>p.second)
//// 		v1.push_back(p);
//
//	
//	for (vector<pair<string, int> >::iterator v11 = v1.begin();
//		v11 != v1.end(); ++v11)
//		cout << v11->first << v11->second << endl;
//	system("pause");
//	return 0;
//}



//
//#include<iostream>
//#include <string>
//#include <map>
//using namespace std;
//int main()
//{
//	typedef map<string, int> map_map;
//	string word;
//	map<string, int> map_m;
//	while (cin >> word)
//		++map_m[word];
//	map_map::iterator map_first = map_m.begin();
//	while (map_first != map_m.end())
//	{
//		cout << (*map_first).first << " "
//			<< map_first->second << endl;
//		map_first++;
//	}
//
//
////  	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
////  	vector<int> svec(ia, ia + sizeof(ia) / sizeof(int));
////  	list<int> slist(ia, ia + sizeof(ia) / sizeof(int));	
////  // 	pair<vector<int>::iterator, int>;
////  // 	pair<list<int>::iterator, int>;
////  	vector<int>::iterator se = svec.begin();
////  	map<vector<int>::iterator, int> p;
////  	map<pair<string,int>, int> p1;
////  	map<list<int>::iterator, int> p2;
////  
////  	while (se != svec.end())
////  	{
////  		cout << *se++ << " ";
////  	}
////  	cout << endl;
////  
////  	list<int >::iterator sli = slist.begin();
////  	while (sli != slist.end())
////  	{
////  		cout << *sli++ << " ";
////  	
////  	}
////  	
//// 	cout << endl;
//	return 0;
//}



#include <map>
//int main()
//{
	//���ݵĲ���--��һ�֣���insert��������pair����  
	//map<int, string> mapStudent;
	//pair<map<int, string>::iterator, bool> Insert_Pair;
	//Insert_Pair = mapStudent.insert(map<int, string>::value_type(1, "student_one"));
	//mapStudent.insert(pair<int, string>(2, "student_two"));
	//mapStudent.insert(pair<int, string>(3, "student_three"));
	//Insert_Pair = mapStudent.insert(map<int, string>::value_type(1, "student_one"));
	////�ڶ��֣���insert��������value_type���ݣ��������˵��  
	//map<int, string> mapStudent;
	//mapStudent.insert(map<int, string>::value_type(1, "student_one"));
	//mapStudent.insert(map<int, string>::value_type(2, "student_two"));
	//mapStudent.insert(map<int, string>::value_type(3, "student_three"));

	////�����֣������鷽ʽ�������ݣ��������˵�� 
	//map<int, string> mapStudent;
	//mapStudent[1] = "student_one";
	//mapStudent[2] = "student_two";
	//mapStudent[3] = "student_three";
//
//	map<int, string>::iterator iter;
//	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
//		cout << iter->first << ' ' << iter->second << endl;
//	return 0;
//}

//int main()
//{
//	map<int, string> mapStudent;
//	pair<map<int, string>::iterator, bool> Insert_Pair;
//	Insert_Pair = mapStudent.insert(pair<int, string>(1, "student_one"));
//	if (Insert_Pair.second == true)
//		cout << "Insert Successfully" << endl;
//	else
//		cout << "Insert Failure" << endl;
//	Insert_Pair = mapStudent.insert(pair<int, string>(1, "student_two"));
//	if (Insert_Pair.second == true)
//		cout << "Insert Successfully" << endl;
//	else
//		cout << "Insert Failure" << endl;
//	map<int, string>::iterator iter;
//	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
//		cout << iter->first << ' ' << iter->second << endl;
//	return 0;
//}





//int main()
//
//{
//	map<int, string> mapStudent;
//	mapStudent.insert(pair<int, string>(1, "student_one"));
//	mapStudent.insert(pair<int, string>(2, "student_two"));
//	mapStudent.insert(pair<int, string>(3, "student_three"));
//	//�����Ҫ��ʾ���Ч������ѡ�����µ�һ�֣��㿴����Ч����ȽϺ�  
//	//���Ҫɾ��1,�õ�����ɾ��  
//	map<int, string>::iterator iter;
//	iter = mapStudent.find(1);
//	mapStudent.erase(iter);
//	//���Ҫɾ��1���ùؼ���ɾ��  
//	int n = mapStudent.erase(1);//���ɾ���˻᷵��1�����򷵻�0  
//	//�õ���������Ƭ��ɾ�� ,һ�´��������map��� 
//	mapStudent.erase(mapStudent.begin(), mapStudent.end());
//	//��Ƭɾ��Ҫע����ǣ�Ҳ��STL�����ԣ�ɾ��������һ��ǰ�պ󿪵ļ���  
//	//�Ը����ϱ������룬��ӡ�����  
//
//	// �ڵ�һ��Ԫ�������õ�����
//	map<int ,string>::const_iterator map_it = mapStudent.begin();
//	//��ͼ�ϵ�ÿ��Ԫ��
//	while (map_it != mapStudent.end()) {
//		cout << map_it->first << " occurs "
//			<< map_it->second << " times" << endl;
//		++map_it; 
//	}
//	return 0;
//}

//int main()
//{
//	/*�����֣�������������ж������Ƿ���֣����Եñ��˵㣬���ǣ��Ҵ��������ｲ��
//		lower_bound�����÷������������������Ҫ���ҹؼ��ֵ��½�(��һ��������)
//		upper_bound�����÷������������������Ҫ���ҹؼ��ֵ��Ͻ�(��һ��������)
//	 ���磺map���Ѿ�������1��2��3��4�Ļ���
//	      ���lower_bound(2)�Ļ������ص�2����upper - bound��2���Ļ������صľ���3
//		Equal_range��������һ��pair��pair�����һ��������Lower_bound���صĵ�������
//		  pair����ڶ�����������Upper_bound���صĵ������������������������ȵĻ���
//		  ��˵��map�в���������ؼ��֣�*/
//	map<int, string> mapStudent;
//	mapStudent[1] = "student_one";
//	mapStudent[3] = "student_three";
//	mapStudent[5] = "student_five";
//	map<int, string>::iterator iter = mapStudent.lower_bound(1);
//	//���ص��Ǽ�Ϊ1�ĵ�����  
//	cout << iter->second << endl;
//	iter = mapStudent.lower_bound(2);
//	//���ص��Ǽ�Ϊ3�ĵ�����  
//	cout << iter->second << endl;
//	iter = mapStudent.lower_bound(3);
//	//���ص��Ǽ�Ϊ3�ĵ�����  
//	cout << iter->second << endl;
//	iter = mapStudent.upper_bound(2);
//	//���ص����Ͻ�3�ĵ�����  
//	cout << iter->second << endl;
//	iter = mapStudent.upper_bound(3);
//	//���ص����Ͻ�5�ĵ�����  
//	cout << iter->second << endl;
//	pair<map<int, string>::iterator, map<int, string>::iterator> mappair;
//	mappair = mapStudent.equal_range(2);
//	if (mappair.first == mappair.second)
//		cout << "Do not Find" << endl;
//	else
//		cout << "Find" << endl;
//	mappair = mapStudent.equal_range(3);
//	if (mappair.first == mappair.second)
//		cout << "Do not Find" << endl;
//	else
//		cout << "Find" << endl;
//	return 0;
//}


//int main()
//
//{
//	map<int, string> mapStudent;
//	mapStudent.insert(pair<int, string>(1, "student_one"));
//	mapStudent.insert(pair<int, string>(2, "student_two"));
//	mapStudent.insert(pair<int, string>(3, "student_three"));
//	int nSize = mapStudent.size();
//	//�˴�Ӧע�⣬Ӧ���� for(int nindex = 1; nindex <= nSize; nindex++)  
//	//������ for(int nindex = 0; nindex < nSize; nindex++)  
//	for (int nindex = 1; nindex <= nSize; nindex++)
//		cout << mapStudent[nindex] << endl;
//	return 0;
//}


/*���ϵ�318ҳ����--------����ת��map����
------------------�ļ����룬��ȡ�ļ�����ӵ�map������
*һ��ת�����ʵĳ���
*����������:��һ���ǵ���ת��������
�
*�ڶ�����ת������������
*/
//int main(int argc, char **argv)
//{
//	//��ͼ���浥��ת����:;
//	//�ؼ�������������Ѱ�ҵĴ�; ֵ���������ʹ�õĵ���;
//	map<string, string> trans_map;
//	string key, value;
//	if (argc != 3)
//		throw runtime_error("����������Ĳ���");
//	//��ת���ļ������򿪳ɹ�;
//	ifstream map_file;
//	if (!open_file(map_file, argv[1]))
//		throw runtime_error("û��ת���ļ�");
//	//�Ķ�ת��ͼ��������ͼ;
//	while (map_file >> key >> value)
//		trans_map.insert(make_pair(key, value));
//	//�õģ����������Ѿ�׼���ý���ת����;
//		//�������ļ��������Ƿ�ɹ�;
//	ifstream input;
//	if (!open_file(input, argv[2]))
//		throw runtime_error("no input file");
//	string line; //�������б���ÿһ��;
//		//�Ķ��ı���ÿ��ת����һ��;  
//	//getline������һ���Ƚϳ����ĺ��������������������ǾͿ���֪���������������ɶ���һ�����ݵġ�
//	while (getline(input, line)) 
//	{
//		istringstream stream(line); //��atime�϶�һ����;
//		string word;
//		bool firstword = true; // �����Ƿ��ӡ�ո�;
//		while (stream >> word)
//		{
//			// ok::ʵ�ʵ�mapwork���ⲿ���ǳ���ĺ���
//			map<string, string>::const_iterator map_it = trans_map.find(word);
//			if (map_it != trans_map.end())// ����������map��;
//				word = map_it->second;//�����滻Ϊ��������ֵ;
//			if (firstword)
//				firstword = false;
//			else
//				cout << " ";
//			cout << word;
//		}
//		cout << endl;
//	}
//	return 0;
//}



////ֻ������
//int main()
//{
//	map< string, vector<string> > children;
//	string famName, childName, birthday;
//	do
//	{
//		cout << " ���뻧��(ctrl + z toend): " << endl;
//		cin >> famName;
//		if (!cin)
//			break;
//		vector<string> chd;
//		pair< map< string, vector<string> >::iterator, bool > ret;
//		ret = children.insert(make_pair(famName, chd));
//		if (!ret.second)
//		{
//			cout << "��ͥ�����Ѿ�����:" << famName << endl;
//			continue;
//		}
//		cout << "\n\t�����ͯ���ƺ�����(ctrl + zto end): " << endl;
//		while (cin >> childName)
//			ret.first->second.push_back(childName);
//		cin.clear();
//	} while (cin);
//	cin.clear();
//	cout << "\n\t����һ����������: " << endl;
//	cin >> famName;
//	map< string, vector<string> >::iterator iter = children.find(famName);
//	if (iter == children.end())
//		cout << "\n\t�Բ�������û������ա� " << famName << endl;
//	else
//	{
//		cout << "\n\t������:" << endl;
//		vector<string>::iterator it =
//			iter->second.begin();
//		while (it != iter->second.end())
//			cout << *it++ << endl;
//	}
//	system("pause");
//	return 0;
//}

////�������ĸĽ���������������
//int main()
//{
//	typedef pair<string, string> pair_p;
//	typedef vector<pair_p > vector_v;
//	typedef map < string, vector_v >  map_map;
//	map_map children;
//	string famName, childName, birthday;
//	do
//	{
//		cout << " ���뻧��(ctrl + z toend): " << endl;
//		cin >> famName;
//		if (!cin)
//			break;
//		vector_v  vh;
//		pair_p chd;
//		pair< map_map::iterator, bool > ret = 
//                    children.insert(make_pair(famName, vh));
//		if (!ret.second)
//		{
//			cout << "��ͥ�����Ѿ�����:" << famName << endl;
//			continue;
//		}
//		cout << "\n\t�����ͯ���ƺ�����(ctrl + zto end): " << endl;
//		while (cin >> childName >> birthday)
//			ret.first->second.push_back(make_pair(childName, birthday));
//		cin.clear();
//	} while (cin);
//
//	cin.clear();
//	cout << "\n\t����һ����������: " << endl;
//	cin >> famName;
//	map_map::iterator iter = children.find(famName);
//	if (iter == children.end())
//		cout << "\n\t�Բ�������û������ա� " << famName << endl;
//	else
//	{
//		cout << "\n\t��ͯ���ƺ�����:" << endl;
//		vector_v::iterator it = iter->second.begin();
//		while (it != iter->second.end())
//		{
//			cout << it->first << " " << it->second << endl;
//			it++;
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	vector<int> ivec;
//	set<int> iset;
//	for (vector<int>::size_type i = 0; i != 10; ++i)
//	{
//		ivec.push_back(i);
//		ivec.push_back(i); 
//	}
//	pair<set<int>::iterator, bool > pair_iter;
//	for (vector<int>::iterator iv = ivec.begin(); iv != ivec.end(); ++iv)
//	{
//		pair_iter = iset.insert(*iv);
//		cout << pair_iter.second << " ";
//	}
//	cout << endl;
//	set<int>::const_iterator is = iset.begin();
//	while (is!=iset.end())
//	{
//		cout << *is++ << " ";
//	}
//	cout << endl;
//	cout << ivec.size() << endl; 
//	cout << iset.size() << endl; 
//	return 0;
//}


//int main()
//{
//	// 	vector<string> ive;
//	// 	set<string> ise;
//	// 	string books;
//	// 	ive.push_back("C++�������");
//	// 	ive.push_back("C�������");
//	// 	ive.push_back("���ݽṹ");
//	// 	ive.push_back("C++Primer");
//	// 	ive.push_back("���ԭ��");
//	// 	cout << "����Ҫ����������";
//	// 	cin >> books;
//	// 	vector<string>::iterator ive_it = ive.begin();
//	// 	pair<set<string>::iterator, bool > pair_p;
//	// 	while (ive_it != ive.end())
//	// 	{
//	// 		if (books==*ive_it)
//	// 		{
//	// 			ise.insert(books);
//	// 			ive.erase(ive_it);
//	// 			break;
//	// 		}
//	// 		ive_it++;
//	// 	}
//	// 	cout << "�����Ѷ��鼮��";
//	// 	cin >> books;
//	// 	if (ise.count(books))
//	// 	{
//	// 		ise.erase(books);
//	// 		ive.push_back(books);
//	// 	}
//	// 	else
//	// 		cout << "����û�ж���" << endl;
//	// 
//	// 	cout << "�Ѷ��飺" << endl;
//	// 	set<string>::iterator set_it = ise.begin();
//	// 	while (set_it!=ise.end())
//	// 		cout << *set_it++ << " ";
//	// 	cout << "δ���飺" << endl;
//	// 	ive_it = ive.begin();
//	// 	while (ive_it != ive.end())
//	// 		cout << *ive_it++ << " ";
//
//
//	vector<string> strVecBook;
//	string bName;
//	cout << " ��������Ҫ��������(ctrl + z��β) : \n";
//	while (cin >> bName)
//		strVecBook.push_back(bName);
//	size_t NumOfBooks = strVecBook.size();
//	set<string> strSetReadedBook;
//	string strChoice, bookName;
//	bool _6MonthLater = false;
//	// ʹ��ϵͳ��ʱ�䲥������
//	srand((unsigned)time(NULL));
//	while (!_6MonthLater && !strVecBook.empty())
//	{
//		cin.clear();
//		cout << "\n�����һ������?(��/��) : ";
//		cin >> strChoice;
//		if (strChoice[0] == 'Y' || strChoice[0] == 'y')
//		{
//			int i = rand() % strVecBook.size();
//			bookName = strVecBook[i];
//			cout << " =>> ����ѡ���Ȿ�����: " << bookName << endl;
//			strSetReadedBook.insert(bookName);
//			strVecBook.erase(strVecBook.begin() + i);
//			cout << "\tOne month later ...  " << endl << " ������Ȿ����?(Yes / No) : ";
//			//cin.clear();
//			cin >> strChoice;
//			if (strChoice[0] == 'n' || strChoice[0]== 'N')
//			{
//				// ��strSetReadedBookɾ���Ȿ�飬����ӵ�strVecBook
//				strSetReadedBook.erase(bookName);
//				strVecBook.push_back(bookName);
//			}
//		}
//		cout << "6�º�?(��/��): ";
//		//cin.clear();
//		cin >> strChoice;
//		if (strChoice[0] == 'Y' || strChoice[0] == 'y')
//			_6MonthLater = true;
//	}
//	if (_6MonthLater)
//	{
//		if (!strSetReadedBook.empty())
//		{
//			cout << "\n ==>>>�������6��������Ķ��ˣ� \n\t";
//			for (set<string>::iterator iter =
//				strSetReadedBook.begin(); iter !=
//				strSetReadedBook.end(); ++iter)
//			{
//				cout << *iter << " ";
//			}
//		}
//		if (!strVecBook.empty())
//		{
//			cout << "\n ==>>>��û�ж�������: : \n\t";
//			for (vector<string>::iterator it =
//				strVecBook.begin(); it != strVecBook.end(); ++it)
//			{
//				cout << *it << " ";
//			}
//		}
//		cout << endl;
//	}
//	if (strSetReadedBook.size() == NumOfBooks)
//		cout << "\t Good, you read all the books. " << endl;
//	system("pause");
//	return 0;
//}

// int main()
// {
// 	typedef multimap<string, string> mu_ty;
// 	mu_ty authors;
// 	authors.insert(make_pair("Barth", "bot-Weed Factor"));
// 	authors.insert(make_pair("John", "aost in the Funhouse"));
// 	authors.insert(make_pair("John", "bot-Weed Factor"));
// 	authors.insert(make_pair("Barth", "aost in the Funhouse"));
// 	string a = "Barth";
// 	pair<mu_ty::iterator, mu_ty::iterator> pair_p;
// 	pair_p = authors.equal_range(a);
//    	while (pair_p.first!=pair_p.second)
// 	{
// 		cout << pair_p.first->first << " " << pair_p.first->second << endl;
// 		pair_p.first++;
// 	}

// 	typedef multiset<string> mu_ty;
// 	mu_ty authors;
// 	authors.insert("Barth");
// 	authors.insert("bot-Weed Factor");
// 	authors.insert("John");
// 	authors.insert("Barth");
// 	string a = "Barth";
	

	/*typedef multimap<string, string> mu_ty;
	mu_ty authors;
	authors.insert(make_pair("Barth", "bot-Weed Factor"));
	authors.insert(make_pair("John", "aost in the Funhouse"));
	authors.insert(make_pair("John", "bot-Weed Factor"));
	authors.insert(make_pair("Barth", "aost in the Funhouse"));
	string a = "Barth";
	mu_ty::iterator au_low = authors.lower_bound("John");
	mu_ty::iterator au_upp = authors.upper_bound("Barth");
	while (au_low!=au_upp)
	{
		cout << au_low->first << " " << au_low->second << endl;
		au_low++;
	}*/





	// 	
	// 	map<string, string> map_map;
	// 	string word,word1;
	// 	while (cin>>word>>word1)
	// 		map_map.insert(make_pair(word, word1));
	// 	for(map<string, string>::iterator map_it = map_map.begin();
	// 	map_it!=map_map.end();map_it++)
	// 		cout << map_it->first << " " << map_it->second << endl;



		//typedef multimap<string, string> mu_ty;
		//mu_ty authors;
		//authors.insert(make_pair("Barth","bot-Weed Factor"));
		//authors.insert(make_pair("John", "aost in the Funhouse"));
		//authors.insert(make_pair("John", "bot-Weed Factor"));
		//authors.insert(make_pair("Barth", "aost in the Funhouse"));
		//string a = "Barth";	
		//mu_ty::size_type mu_sz = authors.count(a);
		//mu_ty::iterator mu_it = authors.find(a);
		//for (mu_ty::size_type i=0;i<mu_sz ;++i, ++mu_it)
		//	cout << mu_it->first << " " << mu_it->second << endl;;
	// 	multimap<string, string>::size_type si = authors.erase(a);
	// 	cout << si;
	// 	for (multimap<string, string>::iterator multimap_it = authors.begin();
	// 		multimap_it != authors.end(); ++multimap_it)
	// 		cout << multimap_it->first << " " << multimap_it->second << endl;
//	return 0;
/*}*/

// int main()//10-26    1 d 1 d 2 g 6 e 4 b 4 d 5 h 2 d 1 j a d
// {
// 	typedef multimap<string, string> ty_mult;
// 	ty_mult mu;
// 	string word1, word2;
// 	ty_mult::iterator ty_mult_it;
// 	ty_mult::size_type ty_mult_sz;
// 	cout << "��������" << endl;
// 	while (cin >> word1 >> word2)
// 		mu.insert(make_pair(word1, word2));
// 	cout << "����Ҫɾ��������" << endl;
// 	cin.clear();
// 	while (cin)
// 	{
// 		cin >> word1;
// 		if (!cin)
// 			break;
// 		ty_mult_sz = mu.count(word1);
// 		if (!ty_mult_sz)
// 		{
// 			cout << "û�и�����" << endl;
// 			continue;
// 		}
// 		//while (mu.lower_bound(word1) != mu.upper_bound(word1))
// 		//	mu.erase(mu.lower_bound(word1));
// 		//cout << "ɾ���ɹ�" << endl;
// 		
// 
// 		pair<ty_mult::iterator, ty_mult::iterator> pair_mult;
//  		pair_mult = mu.equal_range(word1);
// 		if (pair_mult.first != pair_mult.second)
// 		{
// 			mu.erase(pair_mult.first, pair_mult.second);
// 			cout << "ɾ���ɹ�" << endl;
// 		}
// 		else
// 			cout << "û�и�����" << endl;
// 
// 
// 	}
// 	cin.clear();
// 	for (ty_mult_it = mu.begin(); ty_mult_it != mu.end(); ++ty_mult_it)
// 		cout << ty_mult_it->first << " " << ty_mult_it->second << endl;
// 	return 0;
// }




				

#include "TextQuery.h"
 //����ʹ�õ���������ָ��Ҫ��ѯ���ļ�
int main()
{
	// ���û�����ѯ���ʵ��ļ�
	ifstream infile;
	infile.open("123.txt", ios::out);
	if (!infile)
	{
		cerr << "No input file!" << endl;
		return EXIT_FAILURE;
	}
	TextQuery tq;
	tq.read_file(infile); //����map< string, set<line_no> > word_map;
		//�����û�:��ʾ���Һʹ�ӡ���
		//����ѭ��; ѭ���������ڲ�
	while (true)
	{
		cout << "���뵥��Ѱ�ң���q�˳�: ";
		string s;
		cin >> s;
		if (!cin || s == "q")
			break;
		// ��ȡ�õ��ʳ��ֵ��кż���
		set<TextQuery::line_no> locs = tq.run_query(s);
		//��ӡ���������е��¼�������еĻ�
		print_results(locs, s, tq);
	}
	return 0;
}



