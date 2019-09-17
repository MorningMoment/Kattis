#include <iostream>
#include <iterator> 
#include <map>
#include <vector>
using namespace std;

int find_i(vector<int> v,int n){
	for(int i=0;i<v.size();i++){
		if(v[i]==n) return i+1;
	}
}

int main(){
	int n;
	cin>>n;
	map<int,int> m;
	for(int i=1;i<7;i++){
		m.insert(pair<int,int>(i,0));
	}
	vector<int> v;

	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		v.push_back(num);
		//cout<<num<<endl;
		auto itr = m.find(num);
		itr->second++;
		//cout<<itr->second;
	}


	int max_num = 0;
	for(int i=1;i<7;i++){
		auto itr = m.find(i);
		if(itr->second == 1) max_num = i;
	}
	if(max_num == 0) cout<<"none";
	else cout<<find_i(v,max_num);
	return 0;

}