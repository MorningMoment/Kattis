#include <vector>
#include <iostream>

using namespace std;


void fill_around(int i, int j,int N,int M){
	for(int p=i-1;p<i+2;p++){
		for(int q=j-1;q<j+2;q++){
			if(p>-1 and p<N and q>-1 and q<M) cout<<"("<<p<<","<<q<<")"<<" ";
		}
		cout<<endl;
	}
}


void fill_around1(int (&mat)[101][101],int N, int M, int i, int j){
	for(int p=i-1;p<i+2;p++){
		for(int q=j-1;q<j+2;q++){
			if(p>-1 and p<N and q>-1 and q<M) mat[p][q]++;
		}
		mat[i][j]=9999;
	}
}

void show_mat(int mat[101][101], int N, int M){
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	}

int main(){
	int mat[101][101];
	fill_around1(mat,4,1,0,0);
	show_mat(mat,4,1);


}