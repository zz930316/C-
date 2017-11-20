#include "TextQuery.h"



// read_file�洢�����ļ�
void TextQuery::store_file(ifstream & file)
{
	string word;
	while (getline(file, word))
		lines_of_text.push_back(word);
}

//��ÿ��������һ���к������
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


//run_query�ҵ������ĵ��ʲ����س�������
set<TextQuery::line_no> TextQuery::run_query(const string& word) const
{
	string word1 = word;
	map<string, set<line_no> >::const_iterator map_it= word_map.find(word1);
	if (map_it != word_map.end())
		return map_it->second;
	else
		return set<line_no>();
}


//text_line�������ļ�����һ�����ֵ��ʵ���һ�еľ���
string TextQuery::text_line(line_no li_sz) const
{
	if (li_sz < lines_of_text.size())
	{
		return lines_of_text[li_sz];
	}

}


// ���ctr����1�����ظ�����ʽ��word
string make_plural(size_t ctr, const string &word,const string &ending)
{
	return (ctr == 1) ? word : word + ending;
}

void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery &file)
{
	// ����ҵ�������ʣ��Ϳ��Դ�ӡ���������е��¼�
	typedef set<TextQuery::line_no> line_nums;
	line_nums::size_type size = locs.size();
	cout << "\n" << sought << " occurs " << size << " " 
		<< make_plural(size, "time", "s") << endl;
	//��ӡ�����ʳ��ֵ�ÿһ��
	for (line_nums::const_iterator it = locs.begin(); it != locs.end(); ++it)
		// d��Ҫ�����û����ı��д�0��ʼ																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
		cout << "\t(line " << (*it) + 1 << ") " << file.text_line(*it) << endl;
}

