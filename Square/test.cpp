#include <iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int maxnum = 0;
	unsigned long minnum = 9999999999;
 	for(int i=0;i<n;i++){
 		int num;
 		cin>>num;
 		maxnum = maxnum>num?maxnum:num;
 		minnum = minnum<num?minnum:num;
 	}
 	cout<<maxnum-minnum;


}