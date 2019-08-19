#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // pointer str points to const string literal "Hello". 
    // No need to declare size. 
    const char* str1 = "This is GeeksForGeeks"; 
  
    cout << str1 << endl <<endl; 


    char colour[4][10] = {"Blue", "Red", "Orange", 
                    "Yellow"}; 
    
    // Printing Strings stored in 2D array 
    for (int i = 0; i < 4; i++) 
        cout << colour[i] << "\n"; 
    
  
    return 0; 
} 
