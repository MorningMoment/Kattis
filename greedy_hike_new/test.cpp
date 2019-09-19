#include <iostream>
#include <vector>
using namespace std;

void count_around(int &cnt,int mount[][102],int& x,int &y,int N,int M){
		int ord[3] = {x-1,x+1,x};
		int ori = mount[x][y];
		int min_dis = 10001;
		int x_flag=0;

		for(int i=0;i<3;i++){
			int x_pos = ord[i];
			if(x_pos<0 or x_pos>N-1) continue;
			else{
				int dis = abs(ori-mount[x_pos][y+1]);
				if(min_dis>dis or min_dis == dis){
					x_flag = x_pos;
					min_dis = dis;
				}
			}
		}
		cnt+=min_dis;
		x = x_flag;
		y = y+1;
	}



int main(){
	int N,M;
	cin>>N>>M;
	int x,y;
	cin>>x>>y;

	int mount[999][102];
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			int num;
			cin>>num;
			mount[i][j]=num;
		}
	}

	int cnt = 0;
	int i = y;
	while(i<M-1){
		count_around(cnt,mount,x,y,N,M);
		i++;
	}
	cout<<x<<' '<<y<<" "<<cnt;







	return 0;
}