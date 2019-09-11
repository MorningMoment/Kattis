#include <iostream>
#include <vector>
#include <string>
#include <map> 

using namespace std;

void showv(vector<string> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}



void showmap(map<string,int> cards){
	map<string,int>::iterator itr;
	for(itr=cards.begin();itr!=cards.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
}
}



int main(){
	int n;
	cin>>n;
	vector<string> p1,p2;
	for(int i=0;i<n;i++){
		string card;
		cin>>card;
		p1.push_back(card);
	}
	for(int i=0;i<n;i++){
		string card;
		cin>>card;
		p2.push_back(card);
	}
	map<string, int> cards; 
  
// insert elements in random order 
	cards.insert(pair<string, int>("1", 1)); 
	cards.insert(pair<string, int>("2", 2)); 
	cards.insert(pair<string, int>("3", 3)); 
	cards.insert(pair<string, int>("4", 4)); 
	cards.insert(pair<string, int>("5", 5)); 
	cards.insert(pair<string, int>("6", 6)); 
	cards.insert(pair<string, int>("7", 7)); 
	cards.insert(pair<string, int>("8", 8));
	cards.insert(pair<string, int>("9", 9)); 
	cards.insert(pair<string, int>("10", 10));  
	cards.insert(pair<string, int>("J", 11)); 
	cards.insert(pair<string, int>("Q", 12)); 
	cards.insert(pair<string, int>("K", 13)); 
	cards.insert(pair<string, int>("A", 14)); 

	//showmap(cards);

	int result =0;
	for(int i=0;i<n;i++){
		string s1 = p1[i];
		string s2 = p2[i];
		int v1 = cards[s1];
		int v2 = cards[s2];
		if(v1>v2) result++;
		else if(v1<v2) result--;
	}

	if(result>0) cout<<"PLAYER 1 WINS";
	else if(result<0) cout<<"PLAYER 2 WINS";
	else cout<<"TIE";

	//showv(p1);
	//showv(p2);
}











