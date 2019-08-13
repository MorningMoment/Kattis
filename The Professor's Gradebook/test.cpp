#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include<cmath>
#define max_stu 101  
#define max_ass 21 
//the number of students N (1?N?100), and the number of assignments M (2?M?20).
using namespace std;
/*
1. stotal = top m-1 + exam
2. sadjust = stotal/max() * 100
3. sgrade = ceil
4. letter grade
*/


void show_array(double *array,int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<' ';
	}
	cout<<endl;
}

void show_array(char *array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<' ';
	}
	cout<<endl;
}

char letter(int demo){
	if(demo<=100 && demo>=90) return 'A';
	else if(demo<90 && demo>=80) return 'B';
	else if(demo<80 && demo>=70) return 'C';
	else if(demo<70 && demo>=60) return 'D';
	else return 'F';
}

int main(){
	int stu_num,ass_num;
	cin>>stu_num>>ass_num;
	char *name[max_stu];
	double total[max_stu];
	double adjust[max_stu];
	
	for(int i=0;i<stu_num;i++){
		char *p = new char[3];
		double min_score = 1000, sum = 0;
		cin>>p;
		name[i] = p;
		for(int j=0;j<ass_num;j++){
			double demo;
			cin>>demo;
			min_score = min_score<demo?min_score:demo;
			sum+=demo;
		} 
		double exam;
		cin>>exam;
		sum += exam;
		sum -= min_score;
		total[i] = sum;
	
	}
	
	//adjust scores
	double max_score = *max_element(total,total+max_stu);
	for(int i=0;i<stu_num;i++){
		adjust[i] = ceil(total[i]*100/max_score);
		cout<<name[i]<<' '<<total[i]<<' '<<adjust[i]<<' '<<letter(adjust[i])<<endl;
	}
	
	
	
	return 0;
} 
