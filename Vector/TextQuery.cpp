#include "TextQuery.h"



// read_file存储输入文件
void TextQuery::store_file(ifstream & file)
{
	string word;
	while (getline(file, word))
		lines_of_text.push_back(word);
}

//将每个单词与一组行号相关联
void TextQuery::build_map()
{
	set<line_no> set_li;
	string symbol(" :\t,\v\r\n\f1234567890");
	string word;
	typedef vector<string>::iterator Vec_It;
	Vec_It vec_it = lines_of_text.begin();
	line_no line_number = 0;
	while (vec_it != lines_of_text.end())
	{
		++line_number;
		string::size_type beg = 0, end = 0, word = 0;
		while (beg = vec_it->find_first_not_of(symbol, end) != string::npos)
		{
			word = beg - end;
			word.assign(vec_it->begin() + end, vec_it->begin() + beg + word);
			word_map[word].insert(line_number);
			end = vec_it->find_first_of(symbol, beg);
		}
		vec_it++;
	}
}


//run_query找到给定的单词并返回出现在行
set<TextQuery::line_no> TextQuery::run_query(const string& word) const
{
	string word1 = word;
	map<string, set<line_no> >::const_iterator map_it= word_map.find(word1);
	if (map_it != word_map.end())
		return map_it->second;
	else
		return set<line_no>();
}


//text_line从输入文件返回一条出现单词的那一行的句子
string TextQuery::text_line(line_no li_sz) const
{
	if (li_sz < lines_of_text.size())
	{
		return lines_of_text[li_sz];
	}

}


// 如果ctr不是1，返回复数形式的word
string make_plural(size_t ctr, const string &word,const string &ending)
{
	return (ctr == 1) ? word : word + ending;
}

void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery &file)
{
	// 如果找到了这个词，就可以打印计数和所有的事件
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();
	cout << "\n" << sought << " occurs " << size << " " 
		<< make_plural(size, "time", "s") << endl;
	//打印出单词出现的每一行
	for (line_nums::const_iterator it = locs.begin(); it != locs.end(); ++it)
		// d不要混淆用户的文本行从0开始																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
		cout << "\t(line " << (*it) + 1 << ") " << file.text_line(*it) << endl;
}

