#include <iostream>
#include <vector>

using namespace std;


struct point
{
    int x;
    int y;
    
    point(int x1=0,int y1=0):x(x1),y(y1){}
};


void showv(vector<point> v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i].x<<" "<<v1[i].y<<endl;
    }
}

void try_hit(int xv,int yv,vector<point> &v1){
    for(int i=0;i<v1.size();i++){
        if(v1[i].x==xv and v1[i].y==yv) v1.erase(v1.begin()+i);
        
    }
}

int dist_ship(int N, int M, int xv,int yv, vector<point> v1){
    int min_dist = N+M;
    int temp_dist;
    for(int i=0;i<v1.size();i++){
        temp_dist = abs(v1[i].x - xv)+abs(v1[i].y-yv);
        min_dist = min_dist>temp_dist?temp_dist:min_dist;
    }
    return min_dist;
}



int main(){
    int N,M,S,H;
    int scores=0;
    cin>>N>>M>>S>>H;
    vector<point> v1;
    for(int i=0;i<S;i++){
        int x,y;
        cin>>x>>y;
        point temp_p(x,y);
        v1.push_back(temp_p);
    }
    
    // cout<<dist_ship(N,M,2,3,v1)<<endl;
    
    for(int i=0;i<H;i++){
        int h_x,h_y;
        cin>>h_x>>h_y;
        int dist = dist_ship(N,M,h_x,h_y,v1);
        try_hit(h_x,h_y,v1);
        int delta_score = 0>1000-dist*100?0:1000-dist*100;
        scores+=delta_score;
    }
    
    
    //cout<<dist_ship(N,M,2,3,v1)<<endl;
    
    
    unsigned long hitted_ship = S - v1.size();
    cout<<hitted_ship<<"/"<<S<<" ships sunk. Score: "<<scores<<" points";
}

//1/4 ships sunk. Score: 1800 points

