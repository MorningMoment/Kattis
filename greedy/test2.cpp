#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;


int main(){
	//input starting point and size of map
	int x,y,X,Y;
	cout<<"input starting point and size of map"<<endl;
	cin>>X>>Y>>x>>y;
	
	//input map elements
	cout<<"input input map elements "<<endl;
	//map maximum size: 3000*100;
	int map[3000][101];
	int demo;
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			cin>>demo;
			map[i][j] = demo;
		}
	}
	
	//try to display the map
	cout<<endl;
	cout<<setw(4);
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			cout<<map[i][j]<<setw(4);
		}
		cout<<endl;
	}

	cout<<endl;
	
	// copy starting point;
	int start_x = x;
	int start_y = y;
	
	int diss[101],flags[101];
	int dis, flag;
	int poss[3] = {-1,1,0};
	
	cout<<" ("<<x<<" , "<<y<<" )"<<endl;
	for(int j=start_y+1;j<Y;j++){
		int mindis = 1000;
		for(int pos=0;pos<3;pos++){
			int i = poss[pos];
			if(x+i<0) {
				cout<<"exeed border" <<"( "<<x+i<<","<<j<<" )"<<endl;
				continue;
			}; //if exceed map, continue
			if(x+i>=X) continue;
			dis = abs(map[x][y] - map[x+i][j]);
			if(mindis>=dis){
				mindis = dis;
				flag = x+i;
			}
		}
		flags[j] = flag;
		diss[j] = mindis;
/*		flags.push_back(flag);
		diss.push_back(mindis);*/
		x = flag; //
		y++;
		cout<<" ("<<x<<" , "<<y<<" )"<<endl;
	}
	
	int sum = 0;
	for(int j=start_y+1;j<Y+1;j++){
		cout<<diss[j]<<" ";
		sum+=diss[j];
	}
	cout<<endl<<endl<<sum;


	
	return 0;
}
