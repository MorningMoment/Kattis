#include <iostream>
#include <cstring> 
using namespace std;

const char* max(const char* x, const char* y){
	return strcmp(x,y)>0 ?x:y;
} 
int main(){
//	char* a  = "hello";  »á±¨´í 
//	char* b = "hel]";
	string a  = "hello"; 
	string b = "hel]";
	cout<<max(a,b)<<endl;
//	cout<<strcmp(a,b)<<endl;
	return 0;
}
