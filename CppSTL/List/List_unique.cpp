// C++ program to illustrate the 
// unique() function 
#include <bits/stdc++.h> 
using namespace std; 

// Function for binary_predicate 
void show(list<double> lst){
	for(list<double>::iterator itr = lst.begin();
		itr!=lst.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl<<endl;
}

bool compare(double d1,double d2){
	return (int)d1==(int)d2;
}

// Driver code 
int main() 
{ 
	list<double> list;
	double lst[100] = { 2.55, 3.15, 4.16, 4.16, 
						4.77, 12.65, 12.65, 13.59}; 
	for(int i=0;i<9;i++){
		list.push_back(lst[i]);
	}
	cout << "List is: "; 

	// unique operation on list with no parameters 
	list.unique(); 

	// starts from the first element 
	// of the list to the last 
	show(list);

	// unique operation on list with parameter 
	list.unique(compare); 

	cout << "\nList is: "; 

	// starts from the first element 
	// of the list to the last 
	show(list);

	return 0; 
} 
