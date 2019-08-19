#include <iostream>
#include <vector>

using namespace std;



int main(){
	vector<int*> v1(20);
	int a = 10;
	int *b = &a;
	v1[10] = new int(20);
	cout<<*(v1[0]);

	return 0;
}


