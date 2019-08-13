#include <iostream>

using namespace std;

static int sum;
void demo(int num){
	sum += num;
}

int main(){
	demo(20);
	demo(30);
	cout<<sum;

	return 0;
}

