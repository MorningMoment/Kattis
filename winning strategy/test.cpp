#include <iostream>
using namespace std;

/*The input contains the specification of a single game.
The first three lines contain the values of m1, b1, and n, respectively.
The fourth line contains n integers, each separated by a single space.
These integers specify the outcome of the n coin flips in the game: a 1 indicates heads,
and a 0 indicates tails.

Note that the first two sample inputs correspond to the two examples shown above.*/

int main(){
	int m1,b1,n;
	cin>>m1>>b1>>n;
	int b0 = b1;
	int games[1001];
	for(int i=0;i<n;i++){
		int demo;
		cin>>demo;
		if(demo ==0){
			m1-=b1;
			b1 = (2*b1<m1)?2*b1:m1;
		}
		else{
			m1+=b1;
			b1 = (b0<m1)?b0:m1;
		}
		if(m1<1){
			cout<<"BROKE";
			break;
		}
	}
	if(m1>=1){
		cout<<m1;
	}
	
	
/*100
5
4
0 1 0 0*/



	return 0;
}
