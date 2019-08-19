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
	Graph(){n=e=groups=0;} // constructor
	vector< Vertex > V;//set of nodes
	int n; // number of nodes
	int e; // number of edges
	static int groups; 
	int E[220][220]; // matrix of edges

	Vstatus &status(int i){return V[i].status;}  
	bool exists(int i,int j){ return (0<=i)&&(i<n)&&(0<=j)&&(j<n)&&E[i][j]!=0 || E[j][i]!=0 ;}

	bool anyexist(int i){
		bool flag = false;
		for(int j=0;j<n;j++){
			if(exists(i,j)){
				flag = true;
				break;
			}
		}
		return flag;
	}

	int nextNbr(int i,int j);

	int firstNbr(int i){return nextNbr(i,n);}

    void dfs(int s){
        int v=s;
        do if(status(v)==UNDISCOVERED){
        	groups++;
        	DFS(v);
        }while(s!=(v=(++v%n)));
    }
  



	void DFS(int v){
		status(v) = DISCOVERED;
		for(int u = firstNbr(v);u>-1;u = nextNbr(v,u)){
			// switch(status(u)){
			// 	case UNDISCOVERED:
			// 		DFS(u);
			// 		break;
			// 	default:
			// 		break;
			if(status(u) == UNDISCOVERED) DFS(u);
			else continue;
			}
			status(v) = VISITED;	
	}

	void showallNbr(int i){
		int j = firstNbr(i);
		while(j>-1){
			cout<<j<<endl;
			j = nextNbr(i,j);
		}
	}

	void resetVertex(){
		for(int i =0;i<n;i++){
			V[i].status = UNDISCOVERED;
		}
	}


};

int Graph::groups = 0;

int Graph:: nextNbr(int i,int j){
      while((-1<j) && (!exists(i,--j))); 
      return  j;
    }


int main(){
	Graph g1;
	cin>>g1.n>>g1.e;

	// int nodes,edges_num,E[201][201];
	// cin>>nodes>>edges_num;
	for(int i=0;i<g1.e;i++){
		int edge1,edge2;
		cin>>edge1>>edge2;
		g1.E[edge1][edge2] = 1;
	}

	// for(int i=0;i<g1.n;i++){
	// 	for(int j=0;j<g1.n;j++){
	// 		cout<<g1.E[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	for(int i=0;i<g1.n;i++){
		g1.V.push_back(Vertex(i));
	}
	g1.resetVertex();
	// for(int u = g1.firstNbr(4);u>-1;u = g1.nextNbr(4,u)){
	// 	cout<<u<<endl;
	// }
	//.showallNbr(0);
	//cout<<g1.nextNbr(3,1);
	//g1.showallNbr(4);
	
	 g1.dfs(0);
	 cout<<g1.groups;

	

	//cout<<g1.groups;

	//cout<<g1.firstNbr(0);

	//cout<<g1.V[0].status<<endl;


	return 0;
}

 
