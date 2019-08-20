#include <iostream>
using namespace std;
#define max 100 //maximum array size

void input_arr(char *array[],int size){
	cout<<"plz input char array with size "<<size<<endl;
	for(int i=0;i<size;i++){
		char *p;
		p = new char[31]; // max length of each string +1;
		cin>>p;
		array[i] = p;
	}
}

void show_arr(char *array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}


int main(){
	char *demo[max];
	int size = 3;
	input_arr(demo,size);
	show_arr(demo,size); 
	return 0;
}

