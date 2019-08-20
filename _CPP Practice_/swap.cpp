#include <iostream>
using namespace std;

template <typename T> 
T myMax(T x, T y) 
{ 
   return (x > y)? x: y; 
} 

template <typename T> 
void swap( T& n1, T& n2 ){
	cout<<"old n1 = "<<n1<<" n2 = "<<n2<<endl;
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout<<"n1 = "<<n1<<" n2 = "<<n2<<endl;
}

int main(){
	int a = 10;
	int b = 20;
	swap(a,b);
	return 0;
} 
