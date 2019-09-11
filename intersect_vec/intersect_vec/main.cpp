//
//  main.cpp
//  intersect_vec
//
//  Created by zhouxing on 9/7/19.
//  Copyright © 2019 zhouxing. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void showv(vector<int> v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {2,3,4,7,1};
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int>::iterator it, st;
    vector<int> vc(v1.size()+v2.size());
    showv(v1);
    showv(v2);
    
    it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vc.begin());
    for(st = vc.begin();st!=it;st++){
        cout<< *st <<" ";
    }
    cout<<endl;
    

    return 0;
}
