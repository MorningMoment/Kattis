#include <iostream>
#include <string>
using namespace std;



int main(){
	int lines;
	cin>>lines;
	string demo;
	for(int i=0;i<lines;i++){
		string demo1;
		cin>>demo1;
		demo+=demo1;
	}
	
	int count = 0;
	for(int j=0;j<demo.length();j++){
		if(demo[j]=='C' || demo[j] == 'G') count++;
	}
	cout<<(double)count*100/demo.length()<<endl;
	

	return 0;
}

