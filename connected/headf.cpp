#include <iostream>
#include <stdio.h>
using namespace std;



int main(){
	int n,e;
	cin>>n>>e;
	int E[201][201];

	for(int i=0;i<e;i++){
		int edge1,edge2;
		cin>>edge1>>edge2;
		E[edge1][edge2] = 1;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<E[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}


