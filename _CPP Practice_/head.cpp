#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main(int argc, char *argv[], char *env[])
{
// 	auto a;                 // ����û�г�ʼ�����ʽ���޷��ƶϳ�a������
// 	auto int a = 10;        // ����auto��ʱ������������C++11���Ѳ�����, ���Ǿɱ�׼���÷���

	// 1. �Զ������Ƶ�����
	auto a = 10;
	auto c = 'A';
	auto s("hello");
	cout<<a;



	// 2. �����߳�
	map<int, map<int,int> > map_;
	map<int, map<int,int>>::const_iterator itr1 = map_.begin();
	const auto itr2 = map_.begin();
	auto ptr = []()
	{
		cout << "hello world" << endl;
	};

	return 0;
};


