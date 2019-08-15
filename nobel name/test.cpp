#include <string>
#include <iostream>

using namespace std;

//string repeat( const string &word, int times ) {
//   string result ;
//   result.reserve(times*word.length()); // avoid repeated reallocation
//   for ( int a = 0 ; a < times ; a++ )
//      result += word ;
//   return result ;
//}


int main(){
	string a,b;
	cin>>a>>b;
	int len = b.length();
	if(len==5) len=4;
	string c;
	for(int i=0;i<len;i++){
		c+=b;
	}
	cout<<a<<" "<<c<<endl;


	return 0;
}


