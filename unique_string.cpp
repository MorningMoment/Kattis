#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str = "aaabbbbeeeeffrreee";
    //sort(str.begin(), str.end());
    //cout<<str<<endl;
    // cout<<"****"<<endl;
    
    // Using unique() method
    auto res = unique(str.begin(), str.end());
    
    cout << string(str.begin(), res)
    << endl;
}
