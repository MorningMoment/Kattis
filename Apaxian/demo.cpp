#include <iostream>
#include <string>
#include <vector>
using namespace std;

//count the appearance of a substring in a string
int count_app(string &pat, string &txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 

int main(){
	string a = "ab";
	string b = "bc";
	cout<<b.find(a)<<endl;
}
