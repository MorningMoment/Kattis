#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
//Game of life

// Any live cell with fewer than two live neighbors dies, as if caused by under population.
// Any live cell with two or three live neighbors lives on to the next generation.
// Any live cell with more than three live neighbors dies, as if by overpopulation.
// Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

void showv(vector< vector<int> > v,int x,int y){
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int checkaround(vector< vector<int> > v,int x,int y,int N,int M){
	int cnt = 0;
	for(int i=x-1;i<x+2;i++){
		for(int j=y-1;j<y+2;j++){
			// if(i>-1 and j>-1 and i<N and j<M and i!=x or j!=y){
			// 	cout<<i<<" "<<j<<" "<<v[i][j]<<endl;
			// }
			// else continue; // cannot run
			if(i==-1 or j==-1 or i==N or j==M){
			}
			else{
				if(i!=x or j!=y) {
					cnt+=v[i][j];
				}
			}
		}
	}
	return cnt;
}


int main(){
	vector< vector<int> >mapp;
	int x,y;
	cin>>x>>y;

	for(int i=0;i<x;i++){
		vector<int> vdemo;
		for(int j=0;j<y;j++){
			int num;
			cin>>num;
			vdemo.push_back(num);
		}
		mapp.push_back(vdemo);
	}

	showv(mapp,x,y);

	vector< vector<int> >newmpp;
		for(int i=0;i<x;i++){
			vector<int> demov;
			for(int j=0;j<y;j++){
				int num = checkaround(mapp,i,j,x,y);
				if(mapp[i][j]==0){
					if(num==3) demov.push_back(1);
					else demov.push_back(0);
				}
				else{
					if(num==2 or num==3) demov.push_back(1);
					else demov.push_back(0);
				}

		}
		newmpp.push_back(demov);	
	}

	//cout<<checkaround(mapp,3,2,4,4);
	showv(newmpp,x,y);

}