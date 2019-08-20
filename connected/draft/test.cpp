#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector <int> graph,subgraph; // nodes has been visited
int count =0;
int flag = 0; // in subgraph: new nodes added into subgraph
int root; // root vertex

vector <int> dfs(vector<int> subgraph, int flag, int edges[][2], int edges_nums){
	int flagc = flag;
	flag = subgraph.size();

	if(flagc==flag) return subgraph;
	else{
		for(int i=flagc;i<subgraph.size();i++){
			for(int j = 0;j<edges_nums;j++){ //search all edges
				if(edges[j][0] == subgraph[i]){
					bool f = false;
					for(int k=0;k<subgraph.size();k++){ 
						if(subgraph[k] == edges[j][1]) f = true;
					}
					if(f==false){ // check if the other edge has been subgraph
						int new_nodes = edges[j][1];
						subgraph.push_back(new_nodes);
					}
				}
				else if(edges[j][1] == subgraph[i]){
					bool f = false;
					for(int k=0;k<subgraph.size();k++){ 
						if(subgraph[k] == edges[j][0]) f = true;
					}
					if(f==false){ // check if the other edge has been subgraph
						int new_nodes = edges[j][0];
						subgraph.push_back(new_nodes);
					}
				}
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
	int edges[2002][2];
	for(int i=0;i<edges_nums;i++){
		int demo1,demo2;
		cin>>demo1>>demo2;
		edges[i][0] = demo1;
		edges[i][1] = demo2;
	}

	// for(int i=0;i<edges_nums;i++){
	// 	cout<< edges[i][0] <<" "<<edges[i][1]<<endl<<endl;
	// }

	//test 
	// vector<int> subgraph(1);
	// int flag = 0;
	// vector <int> result = dfs(subgraph,flag,edges,edges_nums);

	// show_v(result);

	// for(int i=0;i<result.size();i++){
	// 	cout<<result[i]<<" ";
	// }

	vector<int> graph(1);
	int count = 0;
	int to_stop = 0;
	while(graph.size()<nodes+1 && to_stop<30){

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