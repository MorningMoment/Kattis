#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
	vector<int> v;


	int key = 6;

	vector<int>::iterator it; 
	it = find(v.begin(), v.end(), key);
	cout<<*it<<endl;

	if (find(v.begin(), v.end(), key) != v.end())
		cout << "Element found";
	else
		cout << "Element not found";

	return 0;
}