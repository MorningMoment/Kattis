#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

void show(list<int> lst){
	for(list<int>::iterator itr = lst.begin();
		itr!=lst.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl<<endl;
}


int main(){
	list<int> lst;
	//initialize with five 7
	lst.assign(5,7);
	list<int>::iterator itr = lst.begin();
	list<int>::iterator itr1 = lst.end();
	advance(itr,1);

	//add at the front 999
	lst.push_front(999);
	show(lst);

	//erase, arguments are **iterator**
	lst.erase(itr,itr1);
	show(lst);



}