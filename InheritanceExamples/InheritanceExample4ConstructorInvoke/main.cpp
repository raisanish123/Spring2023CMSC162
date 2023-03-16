#include <iostream>
using namespace std;
class Base
{
    public:
        Base ()
        {
            cout << "Default constructor of Base" << endl;
        }
        Base (int x)
        {
            cout << "Parameterized constructor of Base " << x << endl;
        }
};

class Derived : public Base
{
    public:
        Derived ()
        {
            cout << "Default constructor of Derived" << endl;
        }
        //By default, the default constructor is called, to call the parameterized constructor, call the constructor in parameterized list
        Derived (int a, int b):Base(b)
        {
          cout << "Parameterized constructor of Derived " << a << endl;
        }
};

int main()
{
    //Derived d;
    Derived d2(10,20);
}