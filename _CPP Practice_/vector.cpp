#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> a,int size){
	for(int i =0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
} 

int main ()
{
  vector<int> myvector(3,1); //Initialize with 3 '1' in the vector
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back (myint); //add num after [1,1,1]
  } while (myint);

  cout << "myvector stores " << int(myvector.size()) << " numbers.\n";
  display(myvector,int(myvector.size()));
  
  
  myvector.erase(myvector.begin(),myvector.begin()+3); //delete first three elements
  display(myvector,int(myvector.size()));
  
  vector<int>::iterator itr;
  itr = myvector.begin();
  for(int i=0;i<int(myvector.size())-2;i++){
  	*itr = myvector[i]*2;
  	itr++;
  }
  display(myvector,int(myvector.size()));
  
  return 0;
}


