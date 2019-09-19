#include <stack>
#include <map>
#include <iostream>
#include <iterator>

using namespace std;

void showmap(map<int,int> mapp){
	int n = mapp.size();
	for(map<int,int>::iterator itr = mapp.begin();itr!=mapp.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
}

int main(){
	stack<int> demo;
	for (int i=0; i<5; ++i) demo.push(i);
	cout<<demo.top();


}