#include <iostream>
using namespace std;

template <class T>
class array{
	public:
		    array(int slots = 1){
			size = slots;
			aptr = new T[slots];
		}
		void fill_array();
		void display_array();
		~ array(){
			delete [] aptr;
		}
		
	private:
		int size;
		T *aptr;
};

template <class T> //函数的类外声明要重新声明template 
void array<T>::fill_array(){ //记得带 <T>
	for(int i=0;i<size;i++){
		cout<<"input the "<<i+1<<" element"<<endl;
		cin>>aptr[i];
	}
}

template <class T>  //函数的类外声明要重新声明template 
void array<T>::display_array(){
	for(int i=0;i<size;i++){
		cout<<aptr[i]<<' ';
	}
	cout<<endl;
}

int main(){
	array<string> a(3);
	a.fill_array();
	a.display_array();
	
	array<int> b(5);
	b.fill_array();
	b.display_array();

	return 0;
}


