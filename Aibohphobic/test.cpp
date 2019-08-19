#include <iostream>
#include <string>

using namespace std;

string test(string inp){
	if(inp.length()<=1) return "PALINDROME";
	else if(inp.length()==2){
		char c1 = inp[0];
		char c2 = inp[1];
		if(c1 == c2) return "PALINDROME";
		else return "NOT PALINDROME";
	}
	else{
		int len = inp.length();
		char beg = inp[0];
		char end = inp[len-1];
		if(beg!=end) return "NOT PALINDROME";
		else{
			return test(inp.substr(1,len-2)); // ** must have return
		}
	}
}

int main(){
	string demo;
	cin>>demo;
	string re = test(demo); //** must def a return variable
	cout<<re;

	return 0;
}

