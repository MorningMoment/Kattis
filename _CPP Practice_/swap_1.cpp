#include<iostream>

using namespace std;

template <class T> 
void swap (T& a, T& b)
{
  T c(move(a)); a=move(b); b=move(c);
}

int main()
{
    int x1=4,y1=7;
	swap(x1,y1);
	cout<<x1<<" "<<y1<<endl;

    return 0;
}
