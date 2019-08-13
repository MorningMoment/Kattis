#include <iostream>
#include <string>
using namespace std;
/*
1. stotal = top m-1 + exam
2. sadjust = stotal/max() * 100
3. sgrade = ceil
4. letter grade
*/

void input_array(double *array, int size){
	for(int i=0;i<size;i++){
		cin>>array[i];
	} 
}

void show_array(double *array,int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<' ';
	}
}

int main(){
	string name;
	const int exam_num;
	cin>>exam_num;
	double grade[exam_num];
	input_array(grade,exam_num);
	show_array(grade,exam_num);
	
	
	return 0;
} 
