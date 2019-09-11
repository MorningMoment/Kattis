
// C++ program to illustrate 
// map::insert({key, element}) 
#include <map>
#include <string>
#include <iostream>
using namespace std; 
  

void scan(string s,int k){
    for(int i=0;i<(s.size()-k+1);i++){
        string substri = s.substr(i,k);
        cout<<substri<<endl;
    }
}

int main() 
{ 
  
    string a = "aab";
    string b = "abcedefg";
    scan(b,2);

} 
