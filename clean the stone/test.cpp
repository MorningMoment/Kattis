#include <iostream>
#include <string>
using namespace std;

string clean(){
	int m,sum;
	for(int i=0;i<10;i++){
		cin>>m;
		if(m == 6){
			return "CLEAN";
		}
		sum+=m;
	}
	if(sum>30) return "CLEAN";
	else return "DO NOT CLEAN";
}


int main(){
	string a;
	a = clean();
	cout<<a;
	
	return 0;
}
