// out_of_range example
#include <iostream>       // cerr
#include <stdexcept>      // out_of_range
#include <vector>         // vector
using namespace std;

int main (void) {
  vector<int> myvector(10);
  myvector = {1,2,3,4};
  try {
    cout<<myvector[18];      // vector::at throws an out-of-range
  }
  catch (const out_of_range& oor) {
  	cout<<"sorry";
    //cerr << "Out of Range error: " << oor.what() << '\n';
  }
  return 0;
}