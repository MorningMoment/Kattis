#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;


int main(){
	//input starting point and size of map
	int x,y,X,Y;
	cin>>X>>Y>>x>>y;

	//input map elements
	//map maximum size: 3000*100;
	int map[3000][102];
	int demo;
	for(int i=0;i<X;i++){
		for(int j=0;j<Y;j++){
			cin>>demo;
			map[i][j] = demo;
		}
	}



	// copy starting point;
	int start_x = x;
	int start_y = y;

	int diss[101],flags[101];
	int dis, flag;
	int poss[3] = {-1,1,0};

	for(int j=start_y+1;j<Y;j++){
		int mindis = 10001;
		for(int pos=0;pos<3;pos++){
			int i = poss[pos];
			if(x+i<0) {
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
	}


	int sum = 0;
	for(int j=start_y+1;j<Y+1;j++){
		sum+=diss[j];
	}
	
	cout<<x<<" "<<y<<" "<<sum;




	return 0;
}
