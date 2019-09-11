
// C++ program to illustrate 
// map::insert({key, element}) 
#include <map>
#include <iostream>
using namespace std; 
  
int main() 
{ 
  
    // initialize container 
    map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert(pair<int,int>(20,10));
    mp.insert(pair<int,int>(30,40));
    mp.insert(pair<int,int>(20,40));
  
    // auto it = mp.find(20); 
  
    // // inserts {3, 6} starting the search from 
    // // position where 2 is present 
    // mp.insert(it, { 3, 60 }); 
  


    map<int,int>::iterator demo_iter = mp.find(50);
    demo_iter->second ++;
    cout<<demo_iter->second;


    //prints the elements 
    cout << "KEY\tELEMENT\n"; 
    for (map<int,int>::iterator itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 

    return 0; 
} 
