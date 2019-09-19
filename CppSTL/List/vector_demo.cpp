#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

void showlisr(vector<int> lst){
	int n = lst.size();
	for(int i =0;i<n;i++){
		cout<<lst[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> lst = {1,2,3,4,5};
	showlisr(lst);
	lst.erase(lst.begin());
	showlisr(lst);
	return 0;
}