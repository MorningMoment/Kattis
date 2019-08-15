/*If a is greater than 31, the date is in Format #3.
If a is greater than 12 but less than or equal to 31, then:
	If c is greater than 31, the date is in Format #2.
	If c is less than or equal to 31, the format is ambiguous.
If a is less than or equal to 12, then:
	If b is greater than 12, the date is in Format #1.
	If b is less than or equal to 12, the format is ambiguous.*/
	
#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>31) cout<<"Format #3";
	else if(a<=31 and a>12){
		if(c>31) cout<<"Format #2";
		else cout<<"Ambiguous";
	}
	else{
		if(b>12) cout<<"Format #1";
		else cout<<"Ambiguous";
	};


	return 0;
}

