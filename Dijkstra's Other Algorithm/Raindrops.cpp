#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num>=0) v1.push_back(num);
        cnt++;
    }
    cout<<accumulate(v1.begin(),v1.end(),0);
    
}
