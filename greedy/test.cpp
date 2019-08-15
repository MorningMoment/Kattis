#include <iostream>
#include <cmath>
using namespace std;


int main(){
	//X,Y
	//starting point
	int X,Y,x,y; //Y<100
	cin>>X>>Y>>x>>y;
	int map[3000][101];
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			int demo;
			cin>>demo;
			map[i][j] = demo;
		}
	}
	

//display map
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
		}
		cout<<endl;

	static int startp = map[x][y];
	cout<<startp<<endl;
	static int sum = map[x][y];
	static int flag = 0;
	for(int j=y+1;j<Y;j++){
		int mindis = 10001;
		for(int i=x-1;i<x+2;i++){
			if(i<0) continue;
			if(i>X) break;
			cout<<'('<<i<<","<<j<<")"<<endl;
			int dis = abs(map[i][j] - startp);
			if(mindis>=dis){
				mindis = dis;
				flag = i;
			}
		}
		cout<<'('<<flag<<","<<j<<")"<<endl;
		startp = map[flag][j];
		sum += map[flag][j];
	}
	
	cout<<sum<<endl;
	cout<<flag<<endl;
	



	return 0;
}

