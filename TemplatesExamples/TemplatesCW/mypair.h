#ifndef _MYPAIR_H
#define _MYPAIR_H

#include <iostream> 
using namespace std; 
  
template <class T> 
class mypair { 
  private:  
    T a, b; 
  public: 
    mypair (T first, T second):a{first}, b{second} {}
    T getmax (); 
//To do: Write a function getmin and also implement it below
}; 
template <class T> 
T mypair<T>::getmax () 
{ 
  T retval; 
  retval = a>b? a : b; 
  return retval; 
}
#endif
 