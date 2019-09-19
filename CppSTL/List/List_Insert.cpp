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

	//add at the front 999
	lst.push_front(999);
	show(lst);

	//move the pointer forward 2 pos
	advance(itr,2);
	lst.insert(itr,3,6);
	show(lst);

	//make the list reverse
	lst.reverse();
	show(lst);

	//sort the list
	lst.sort();
	show(lst);

}