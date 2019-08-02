#include <iostream>
#include <string>
using namespace std;


int main(){
	int L,N,k,Q; // # lines of inputs, # chars, #len of k, # of k
	//cout<<"# lines of inputs, # chars, #len of k, # of k"<<endl;
	cin>>L>>N>>k>>Q;
	string realstring;
	string line;
	for(int i=0;i<L;i++){
		cin>>line;
		realstring+=line;
	} //get the whole string in realstring

	
	string keys[150001];
	int counts[150001]; 
//	cout<<"input keys"<<endl;
	for(int i=0;i<Q;i++){
		cin>>keys[i];
	}
	
	
	
	for(int i=0;i<realstring.size()-k+1;i++){
		string demo = realstring.substr(i,k);
//		for(int j=i;j<i+k;j++){ // get sublines with length k
//			demo += realstring[j];
//		}
		//cout<<"*** "<<demo<<" ****"<<endl;
		for(int i=0;i<Q;i++){
			if(keys[i] == demo) counts[i]++;
		}
}
	for(int i=0;i<Q;i++){
		cout<<keys[i]<<" "<<counts[i]<<endl;
	}

	return 0;
}

