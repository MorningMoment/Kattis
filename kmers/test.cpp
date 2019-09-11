#include <iostream>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

void show(vector<string> keys, map<string,int> Dict){
	for(int i=0;i<keys.size();i++){
		string key = keys[i];
		map<string,int>::iterator itr = Dict.find(key);
		cout<<key<<" "<<itr->second<<endl;
	}
}

void scan(string s,int k,map<string,int> &Dict){
	for(int i=0;i<(s.size()-k+1);i++){
		string substri = " ";
		substri = s.substr(i,k);
		//cout<<substri<<endl;
		map<string,int>::iterator itr = Dict.find(substri);
		itr->second++;
	}
	//cout<<endl<<endl;;
}

void showmap(map<string,int> mp){
	cout << "KEY\tELEMENT\n"; 
    for (map<string,int>::iterator itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
}


int main(){
	int L,N,k,Q;
	cin>>L>>N>>k>>Q;
	string ori_str;
	for(int i=0;i<L;i++){
		string demo="";
		cin>>demo;
		ori_str+=demo;
	}

	vector<string> Keys;
	map<string,int> Dict;
	for(int i=0;i<Q;i++){
		string demo = "";
		cin>>demo;
		Dict.insert(pair<string,int> (demo,0));
		Keys.push_back(demo);
	}


	scan(ori_str,k,Dict);
	show(Keys,Dict);


	}


