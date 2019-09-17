#include <iostream>

using namespace std;


bool checkout(long n,long C){
	if(n<0 or n>C) return true;
	else return false;
}

int main(){
	long C;
	cin>>C;
	int n;
	cin>>n;
	long pep = 0;

	for(int i=0;i<n;i++){

		long left = 0;
		long board = 0;
		long wait = 0;
		cin>>left>>board>>wait;

		pep-=left;
		if(checkout(pep,C)){
			cout<<"impossible";
			return 0;
		};

		pep+=board;
		if(checkout(pep,C)){
			cout<<"impossible";
			return 0;
		};

		if(C-pep>0){
			if(wait>0){
				cout<<"impossible";
				return 0;
			}
		}
		//last station we have people waiting
		if(wait!=0 and i==n-1){
			cout<<"impossible";
			return 0;
		}

	}

	if(pep!=0){
		cout<<"impossible";
		return 0;
	}

	cout<<"possible";
	return 0;

}