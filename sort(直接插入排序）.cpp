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
		temp = a[i]; //ȡ�����λ�õ�ֵ 
		cout<<"temp = "<<temp<<endl;
		while(j>0 && temp<a[j-1]){ //��i��ʼ��ǰ��ÿһ����j-1)λ�ȴ�С�������temp�󣬾Ͱѣ�j-1)���Ƶ�jλ������Ų�� 
			a[j] = a[j-1];
			display(a,10);
			j--;
		}
		a[j] = temp;//�ڱ�tempС���Ǹ�j-1λ֮����� 
		
	}
}



int main(){
	int a[] = {3,2,8,6,7,1,4,9,5,0};
	sort(a,10);
	
	return 0;
}
