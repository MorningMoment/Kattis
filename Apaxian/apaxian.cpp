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
	string s;
	int n;
	cin>>s>>n;
	int len_s = s.size();

	int count[4];

	for(int i=0;i<n;i++){
		string t;
		cin>>t;
		int len_t = t.size();

		//s: town name ; t: citizen name
		//if name of town appears more than once, ignore this citizen's name
		if(count_app(s,t)>1) continue;

		int pos = t.find(s);
		

        //if town name is longer than citizen's name, this guy must be commoner
		if(len_t<len_s) count[3]++;
		//if town name is the same as citizen's name, ignore this citizen's name
		else if(len_t==len_s){
			if(t!=s) count[3]++;
		}

		//if town name is shorter than citizen's name
		else{
			//case 1: town name appears at the head : princess
			if(pos==0) count[0]++;
			//case 2: town name appears at the middle: priest
			else if(pos>0 and pos<len_t-len_s) count[2]++;
			//case 3: town name appears at the end: baron
			else if(pos==len_t-len_s) count[1]++;
			//case 4: not appear: commoner
			else if(pos>100) count[3]++;
		}
	}

	vector<string> roles;
	roles.push_back("PRINCESS");
	roles.push_back("BARON");
	roles.push_back("PRIEST");
	roles.push_back("COMMONER");

	for(int i=0;i<4;i++){
// 		if(i<3) cout<<count[i]<<" "<<roles[i]<<endl;
// 		else cout<<count[i]<<" "<<roles[i];
		cout<<count[i]<<" "<<roles[i]<<endl;
		
	}

	// string a="ab";
	// string b = "ab";
	// bool mm = a==b;
	// cout<<mm<<endl;

}
