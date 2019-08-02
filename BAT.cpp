#include <iostream>
using namespace std;


int main(){
	int N;
	cin>>N;
	int a = 0;
	int pos = 0;
	int num;
	for(int i=0;i<N;i++){
		cin>>num;
		if(num>=0) {
			a+=num;
			pos++;
		}
	}
	cout<<(double)a/pos<<endl; 
	return 0;
}

