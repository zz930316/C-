#pragma once
#include <iostream>
#include <map>
#include <set>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class TextQuery
{
public:
	typedef vector<string>::size_type line_no;
	// read_fileΪ�����ļ������ڲ����ݽṹ
	void read_file(ifstream &is)
	{
		store_file(is);
		build_map();
	}
	//run_query�ҵ������ĵ��ʲ�����һ��������
	set<line_no> run_query(const string&) const;
	//text_line�������ļ�����һ��������
	string text_line(line_no) const;
	friend void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery &file);
private:
	// read_file�洢�����ļ�
	void store_file(ifstream&);
	//��ÿ��������һ���к������
	void build_map();
	// �����������ļ�
	vector<string> lines_of_text;
	// �����ʹ���������������
	map< string, set<line_no> > word_map;
};