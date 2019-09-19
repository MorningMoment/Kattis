#include <iostream>
#include <vector>

using namespace std;
typedef enum{UNVISITED,VISITED} Status;

// struct node{
// 	int num;
// 	Status status;
// 	node(int n,Status s=UNVISITED):num(n),status(s){}
// };

int another_value(int *edge,node n1){
	int n = n1.num;
	if(edge[0] == n) return edge[1];
	else if(edge[1]==n) return edge[0];
}

void showv(vector<int*> edges){
	for(int i=0;i<edges.size();i++){
		cout<<edges[i][0]<<" "<<edges[i][1]<<endl;
	}
}

void gen_nodes(vector<node> &v1,int num){
	node n1(num);
	v1.push_back(n1);
}

int main(){
	int Nn,Ne;
	cin>>Nn>>Ne;
	vector<int*> edges;
	for(int i= 0;i<Ne;i++){
		int a,b;
		cin>>a>>b;
		int *edge = new int[2];
		edge[0] = a;
		edge[1] = b;
		edges.push_back(edge);
	}

	 for(int i=0;i<edges.size();i++){
	 	int *edge = edges[i];
	 	if()
	 }
	
	return 0;


}