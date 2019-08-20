#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main(int argc, char *argv[], char *env[])
{
// 	auto a;                 // 错误，没有初始化表达式，无法推断出a的类型
// 	auto int a = 10;        // 错误，auto临时变量的语义在C++11中已不存在, 这是旧标准的用法。

	// 1. 自动帮助推导类型
	auto a = 10;
	auto c = 'A';
	auto s("hello");
	cout<<a;



	// 2. 类型冗长
	map<int, map<int,int> > map_;
	map<int, map<int,int>>::const_iterator itr1 = map_.begin();
	const auto itr2 = map_.begin();
	auto ptr = []()
	{
		cout << "hello world" << endl;
	};

	return 0;
};


