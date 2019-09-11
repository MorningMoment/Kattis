#include <vector>
#include <iostream>

using namespace std;

//The map is smaller than 100x100
//to fill the 8 positions around (i,j)
//mark the position with mine as a randomly picked large number, 9999
void fill_around(int (&mat)[102][102],int N, int M, int i, int j,int num){
    for(int p=i-1;p<i+2;p++){
        for(int q=j-1;q<j+2;q++){
            try{
                mat[p][q]+=num;
            }
            catch(out_of_range & e){
            }
        }
        mat[i][j]=9999;
    }
}

//to show the matrix
void show_mat(int mat[102][102], int N, int M){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(mat[i][j]<9999 and mat[i][j]>0) cout<<mat[i][j];
            else if(mat[i][j]>=9999) cout<<"X";
            else cout<<"-";
        }
        //the last line should not be "new line"
        if(i<N-1) cout<<endl;
    }
}


int main(){
    int N,M;
    cin>>N>>M;
    int in_mat[102][102];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int num;
            cin>>num;
            if(num>0){
                fill_around(in_mat,N,M,i,j,num);
            }
        }
    }
    show_mat(in_mat,N,M);
}
