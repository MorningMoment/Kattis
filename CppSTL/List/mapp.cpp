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
	map<int,int> mapp;
	mapp[1] = 2;
	mapp[3] = 10;
	showmap(mapp);
	map<int,int>::iterator itr;
	itr = mapp.find(3);
	mapp.erase(itr);
	showmap(mapp);


}