#include <iostream>
#include <vector>
using namespace std;


void demo(int &x){
	x++;
}
int main(){
	int x = 10;
	demo(x);
	cout<<x;
}