//text = input()
//N,i,v = [int(num) for num in text.split()]
//a_in = input()
//a = [int (num) for num in a_in.split()]
//ori_v = a[i]
//
//def fill(i):
//    if i<0 or i >N:
//        return 0
//    if (a[i] != v) and (a[i] == ori_v):
//        a[i] = v
//        fill(i-1);
//        fill(i+1);
//    else:
//        return 0
//fill(i)
//print(' '.join([str(i) for i in a]))

#include <iostream>
using namespace std;

bool flag = false;
void fill(int a[],int i,int v,int N,int ori_v){
	if(i>=0 && i<N) {
		if(a[i] != v && a[i] == ori_v){
			flag = true;
			a[i] = v;
			fill(a,i-1,v,N,ori_v);
			fill(a,i+1,v,N,ori_v);
		}
	}
}


void show(int a[],int N){
	for(int i=0;i<N;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;	
}

int main(){
	int i, v, N;
	cin>>N>>i>>v;
	int a[101];
	int num;
	for(int i=0;i<N;i++){
		cin>>num;
		a[i] = num;
	}
	int ori_v = a[i];
	fill(a,i,v,N,ori_v);
	if(flag) show(a,N);
	return 0;
}

//10 1 0
//7 2 2 1 1 1 1 2 3 5
//10 7 1
//1 0 0 0 1 0 0 0 1 1

