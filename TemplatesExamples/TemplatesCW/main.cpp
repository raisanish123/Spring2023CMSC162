#include "mypair.h"
#include <iostream>
using namespace std;

// One function works for all data types.
template <typename T> T myMax(T x, T y) { 
  return (x > y) ? x : y;
  }
// Given,a function to test max function
void testMax() {
  cout << myMax<int>(3, 7) << endl;        // Call myMax for int
  cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
  cout << myMax<char>('g', 'e') << endl;   // call myMax for char
}

// To do:
// Write the function template myMin to compute minimum of
// two numbers Then type the function here and test it using some vaues in main
// Note: Type, do not copy so that you practice it properly

// Write the statements to use myMin function
// After that type in testMin the samevalues as testMax, do not copy paste from
// textMax
void testMin() {}

void testMypair() {
  mypair<int> myobject(100, 75);
  cout << myobject.getmax() << endl;
  mypair<double> myobject2(100.0, 750.76);
  cout << myobject2.getmax() << endl;
}
int main() {
  testMax();
  // testMin();
  // testMypair();
  return 0;
}
