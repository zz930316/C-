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
	// read_file为给定文件构建内部数据结构
	void read_file(ifstream &is)
	{
		store_file(is);
		build_map();
	}
	//run_query找到给定的单词并返回一行它出现
	set<line_no> run_query(const string&) const;
	//text_line从输入文件返回一条请求行
	string text_line(line_no) const;
	friend void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery &file);
private:
	// read_file存储输入文件
	void store_file(ifstream&);
	//将每个单词与一组行号相关联
	void build_map();
	// 存整个输入文件
	vector<string> lines_of_text;
	// 将单词关联到所发生的行
	map< string, set<line_no> > word_map;
};