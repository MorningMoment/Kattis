#include <iostream>
using namespace std;

template <class T>
void sort(T a[], int n){
	int i,j;
	T temp;
	for (i = 1;i<n;i++){
		j = i;
		temp = a[i];
		while(j>0 && temp<a[j-1]){
			a[j] = a[j-1];
			j--;
		}
		a[j] = temp;
	}
}

template <class T>
void display(T a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[] = {3,2,8,6,7,1,4,9,5,0};
	display(a,10);
	sort(a,10);
	display(a,10);
	
	return 0;
}
