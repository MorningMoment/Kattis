#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point{
	int x;
	int y;
	point(int xv,int yv):x(xv),y(yv){};
};

bool check(point p1,vector<point> &v1){
	for(int i=0;i<v1.size();i++){
		point p = v1[i];
		if(p1.x == p.x or p1.y == p.y) return false;
		if(abs(p1.x - p.x) == abs (p1.y - p.y)) return false;
	}
	v1.push_back(p1);
	return true;
}


int main(){
	bool flag = true;
	int n;
	cin>>n;
	vector<point> v1;
	// for(int i=0;i<n;i++){
	// 	int xv,yv;
	// 	cin>>xv>>yv;
	// 	point p(xv,yv);
	// 	flag = check(p,v1);
	// }
	int cnt = 0;
	while(flag){
		cnt++;
		int xv,yv;
		cin>>xv>>yv;
		point p(xv,yv);
		flag = check(p,v1);
		if(cnt == n) break;

	}

	if(flag == true) cout<<"CORRECT";
	else if(flag ==false) cout<<"INCORRECT";


}