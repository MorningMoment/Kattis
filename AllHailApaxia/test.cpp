#include <iostream>
#include <string>
using namespace std;


//to flip the number, based on their length

int main(){
	string word;
	cin>>word;
	int len = word.size();
	string newword;

	if(len==1){
		cout<<word;
		return 0;
	}

	if(len%2==0){
		for(int i=0;i<len/2;i++){
			newword+=word[2*i+1];
			newword+=word[2*i];
		}
		cout<<newword;
	}
	else{
		for(int i=0;i<len/2;i++){
			newword+=word[2*i+1];
			newword+=word[2*i];
		}
		newword+=word[len-1];
		cout<<newword;
	}

}