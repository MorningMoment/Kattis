#include <iostream>
#include <vector>

using namespace std;
typedef enum {UNDISCOVERED,DISCOVERED,VISITED} Vstatus;


struct Vertex{
	int data; Vstatus status;
	Vertex(int const& d = (int) 0):data(d),status(UNDISCOVERED){}
};


class Graph{
public:
	public:
	Graph(){n=e=groups=0;} // constructor
	vector< Vertex > V;//set of nodes
	int n; // number of nodes
	int e; // number of edges
	int groups;
	int E[201][201]; // matrix of edges
	//virtual Vstatus& status(int) = 0;
	Vstatus &status(int i){return V[i].status;}
	bool exists(int i,int j){ return (0<=i)&&(i<n)&&(0<=j)&&(j<n)&&E[i][j]!=0 ;}
	// int nextNbr(int i,int j){
	// 	while((-1<j) && (!exists(i,--j)));
	// 	return  j;
	// }

	int nextNbr(int i,int j);

	void showallNbr(int i){
		int j = n;
		while(j>-1){
			int j = nextNbr(i,j);
			cout<<j;
		}
	}


	int firstNbr(int i){return nextNbr(i,n);}

	void dfs(int s){
		int v=s;
		do if(status(v) == UNDISCOVERED) {
			DFS(v);
			groups++;
		}
		while (s!=(v=(++v%n)));
	}

	void DFS(int v){
		status(v) = DISCOVERED;
		for(int u = firstNbr(v);u>-1;u = nextNbr(v,u)){
			switch(status(u)){
				case UNDISCOVERED:
					DFS(u);
					break;
				default:
					break;
			}
		}
		status(v) = VISITED;
	}


};

int Graph::nextNbr(int i,int j){
		while((j>-1) && (!exists(i,j))){
			j--;
		}
		cout<<j<<endl;
		return j;
	}


int main(){
	Graph g1;
	cin>>g1.n>>g1.e;
//
//	// int nodes,edges_num,E[201][201];
//	// cin>>nodes>>edges_num;
	for(int i=0;i<2*g1.e;i++){
		int edge1,edge2;
		cin>>edge1>>edge2;
		g1.E[edge1][edge2] = 1;
	}
////
	for(int i=0;i<g1.n;i++){
		for(int j=0;j<g1.n;j++){
			cout<<g1.E[i][j]<<" ";
		}
		cout<<endl;
	}
//
//	for(int i=0;i<g1.n;i++){
//		g1.V.push_back(Vertex(i));
//	}
//
//	for(int u = g1.firstNbr(0);u>-1;u = g1.nextNbr(0,u)){
//		cout<<u;
//	}





	return 0;
}



