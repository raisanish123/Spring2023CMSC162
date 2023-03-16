#include <iostream>
using namespace std;
class A{
 private:
  int var;
 protected:
  int protectedVar;
 public:
  int publicVar;
  void setVar(int v){
    protectedVar=v;
  }
  void printVar(){
    cout<<"var: "<<protectedVar<<endl;
  }
};
class B:public A{
  public:
   void setProtected(int v){
     setVar(v);
   }
};
int main() {
 // A a;
  B b;
  b.setProtected(5);
  b.printVar();
  }