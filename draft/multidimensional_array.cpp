#include <iostream>
using namespace std;

int main()
{
	int demo[3][4] = {0, 1 ,2 ,3 ,0 , 5 , 6 , 7 , 8 , 9 , 10 , 11};

	for(int i=0;i<3;i++){
		if(demo[i][0] == 0){
			for(int j=0;j<4;j++){
				cout<<demo[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	/* code */
	return 0;
}