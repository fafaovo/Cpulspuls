#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

//删除vector动态数组中的3 和 删除链表中的3
void test1()
{
	int arr[] = { 1, 4, 3, 7, 9, 3, 6, 8, 3, 3, 5, 2, 3, 7 };
	vector<int> arr_int;
	arr_int.insert(arr_int.begin(), arr, arr + (sizeof(arr) / sizeof(arr[0])));
	//for (int i = 0; i < arr_int.size(); i++)
	//{
	//	if (arr_int.at(i) == 3)
	//	{
	//		arr_int.erase(arr_int.begin() + i);
	//		continue;
	//	}
	//}
	
	list<int> list_int(arr_int.begin(), arr_int.end());
	list<int>::iterator itor;
	list<int>::iterator previtor; //因为是链表，所以删除以后需要上一个itor的位置
	for (itor = list_int.begin(); itor != list_int.end();itor++)
	{	
		if (*itor == 3)
		{
			list_int.erase(itor);
			itor = previtor;
		}
		previtor = itor;
	}
	int a = 0;
}

void test2()
{
	vector<int> arr_int;
	for (int i = 0; i < 10; i++)
	{
		arr_int.push_back(i);
	}
	
	list<int> list_int(arr_int.begin(),arr_int.end());
	int a = 0;
}

int main(int argc, int argv[])
{
	test1();

	system("pause");
	return 0;
}