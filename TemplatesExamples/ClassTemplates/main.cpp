#include <iostream> 

using namespace std; 

template <class T> 
class mypair { 
  private:
    T a, b; 
  public: 
    mypair (T first, T second):a{first}, b{second} 
    {} 
    T getmax (); 

}; 

 //let us define getmax method to return max of a and b 
template <class T> 
T mypair<T>::getmax () 
{ 

  T retval; 
  retval = a>b? a : b; 
  return retval; 

} 

int main () { 
  mypair <int> myobject (100, 75); 
  cout << myobject.getmax()<<endl; 
  mypair <double> myobject2 (100.0, 750.76); 
  cout << myobject2.getmax()<<endl; 

  return 0; 

} 

 