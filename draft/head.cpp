#include <iostream>
#include <vector>

using namespace std;


	// void dfs(int s){
	// 	int v=s;
	// 	do if(status(v) == UNDISCOVERED) {
	// 		//cout<<v<<endl;
	// 		DFS(v);
	// 		groups++;
	// 	}
	// 	while (s!=(v=(++v%n)));
	// }

	void dfs(int s,int n){
		int v=s;
		do {
			cout<<v<<endl;
			v = (++v)%n;
		
		}
		while (s!=v);
	}

int main(){
	int s = 2;
	int n = 10;
	dfs(s,n);

	return 0;
}

