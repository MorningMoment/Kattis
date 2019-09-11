#include <iostream>
#include <string>

using namespace std;



int main(){
	string a;
	cin>>a;
	string demo = "";

	int end = a.size()-1;
	for(int i=0;i<a.size()-1;i++){
		if(a[i]!=a[i+1]) demo+=a[i];
	}

	int d_end = demo.size()-1;

	if(demo[d_end]!=a[end]) demo+=a[end];
	cout<<demo<<endl;

}