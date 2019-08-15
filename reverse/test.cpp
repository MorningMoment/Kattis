#include <iostream>
#include <string>

using namespace std;

string a = "this is nice";

string demo(string input){
	if(input.length()==1) return input;
	else{
		int len = input.length();
		string substring = input.substr(0,len-1);
		return input[len-1]+demo(substring);
	}
}

int main(){
	string input;
	cin>>input;
	cout<<demo(input)<<endl;


	return 0;
}

