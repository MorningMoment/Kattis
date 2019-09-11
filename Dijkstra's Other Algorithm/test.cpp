#include <iostream>
using namespace std;

int func(int a, int b){
	if(a==b) return a;
	if(a>b) return func(a-b,b);
	return func(b,b-a);
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<func(x,y);


}