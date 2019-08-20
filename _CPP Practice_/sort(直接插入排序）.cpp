#include <iostream>
using namespace std;


template <class T>
void display(T a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

template <class T>
void sort(T a[], int n){
	int i,j;
	T temp;
	for (i = 1;i<n;i++){
		cout<<endl<<"**"<<"  i = "<<i<<endl;
		j = i;
		temp = a[i]; //取出这个位置的值 
		cout<<"temp = "<<temp<<endl;
		while(j>0 && temp<a[j-1]){ //从i开始向前和每一个（j-1)位比大小，如果比temp大，就把（j-1)复制到j位（往后挪） 
			a[j] = a[j-1];
			display(a,10);
			j--;
		}
		a[j] = temp;//在比temp小的那个j-1位之后插入 
		
	}
}



int main(){
	int a[] = {3,2,8,6,7,1,4,9,5,0};
	sort(a,10);
	
	return 0;
}
