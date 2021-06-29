#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>
using namespace std;

//删除f
void test1()
{
	map<int, char> map_ic;
	char arr[] = { 'm', 'f', 'f', 'm', 'f', 'm' };
	for (int i = 10010, j = 0; i <= 10015; i++, j++)
	{
		map_ic[i] = arr[j];
	}
	
	map<int, char>::iterator itor;
	map<int, char>::iterator prevItor;
	for (itor = map_ic.begin(); itor != map_ic.end(); itor++)
	{
		if (itor->second == 'f')
		{
			map_ic.erase(itor);
			itor = prevItor;
		}
		prevItor = itor;
	}

	for (itor = map_ic.begin(); itor != map_ic.end(); itor++)
	{
		cout << itor->first << ":" << itor->second << endl;
	}
	
}

void test2()
{
	char ch[] = "123##ab#cctry.com#";
	vector<string> str_arr;
	string str = ch;
	int i = 0;
	while (i < str.size())
	{
		int sub_idx = str.find("#", i);
		string substr = str.substr(i, sub_idx - i);
		if (!substr.empty()) //当取出不为空时才存入
		{
			str_arr.push_back(substr);
		}	
		i = sub_idx + 1; //跳过#号

	}

	int a = 0;
}

int main(int argc, int argv[])
{
	test2();
	
	

	return 0;
}