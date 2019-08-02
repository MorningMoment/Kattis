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
#include <vector>
using namespace std;

void fill(vector<int> a,int i,int v,int N,int ori_v){
	if (i<0 && i>N) return 0;
	if (a[i] != v) && (a[i] == ori_v){
		a[i] = v;
		fill(a,i-1,v,N,ori_v);
		fill(a,i+1,v,N,ori_v);
	}
}

int main(){
	int i, v, N;
	cin>>i>>v>>N;
	vector<int> a;
	int num;
	for(int i=0;i<N;i++){
		cin>>num;
		a.push_back(num);
	}
	for(int i=0;i<N;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

