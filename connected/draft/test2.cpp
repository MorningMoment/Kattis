#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;


vector <int> graph,subgraph; // nodes has been visited
int count =0;
int flag = 0; // in subgraph: new nodes added into subgraph
int root; // root vertex

vector <int> dfs(vector<int> subgraph, int flag, list<int*> edges, int edges_nums){
	int flagc = flag;
	flag = subgraph.size();

	if(flagc==flag) return subgraph;
	else{
		for(int i=flagc;i<subgraph.size();i++){
			list<int*>::iterator tra = edges.begin();
			while(tra!=edges.end()){
				if((*tra)[0] == i or (*tra)[1] ==i){
					int num1 = (*tra)[0];
					int num2 = (*tra)[1];
					if(find(subgraph.begin(),subgraph.end(),num1)==subgraph.end()){
						subgraph.push_back(num1);
						edges.erase(tra);
						edges_nums--;
					}
					else if(find(subgraph.begin(),subgraph.end(),num2)==subgraph.end()){
						subgraph.push_back(num2);
						edges.erase(tra);
						edges_nums--;
					}
				}
				tra++; 
			}

		}
		return dfs(subgraph,flag,edges,edges_nums);
	}


}






void add_vec(vector<int> ori, vector<int> &des){
	for(int i=0;i<ori.size();i++){
		des.push_back(ori[i]);
	}
}


void show_v(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl<<endl;
}




int main(){
	//input ******
	int nodes,edges_nums;
	cin>>nodes>>edges_nums;



	list<int*>edges;
	for(int i=0;i<edges_nums;i++){
		int *edge = new int[2];
		int demo1,demo2;
		cin>>demo1>>demo2;
		edge[0] = demo1;
		edge[1] = demo2;
		edges.push_back(edge);
	}

	vector<int> graph(1);
	int count = 0;
	while(graph.size()<nodes+1){
		for(int i=0;i<nodes;i++){
			if(find(graph.begin(),graph.end(),i) == graph.end() or i==0){
				vector<int> subgraph(1,i);
				int flag = 0;
				vector <int> result = dfs(subgraph,flag, edges, edges_nums);
				//show_v(result);
				//cout<<"********"<<endl;
				add_vec(result,graph);
				count++;
			}
		}
	}
	cout<<count;

	
	return 0;
}