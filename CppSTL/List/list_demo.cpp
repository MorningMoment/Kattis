#include <list>
#include <iostream>
#include <iterator>

using namespace std;

void showlisr(list<int> lst){
	int n = lst.size();
	for(list<int>::iterator itr = lst.begin();itr!=lst.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;
}

int main(){
	list<int> lst = {1,2,3,4,5,6,7,8};
	showlisr(lst);
	list<int>::iterator itr = lst.begin();
	advance(itr,1);
	cout<<*itr<<endl;
	lst.insert(itr,20);
	showlisr(lst);
	itr++;
	lst.erase(itr);
	showlisr(lst);
	return 0;
}