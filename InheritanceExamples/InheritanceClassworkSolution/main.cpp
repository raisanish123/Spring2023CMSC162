#include <iostream>
using std::endl;
using std::cout;
using std::string;
//Simple Animal class for practice
class Animal{
  private:
    double age;
  protected:
    string name;
  public:
    Animal(double age):age{age}{}
    Animal(double age, string name):age{age},name{name}{}
    virtual void print(){
      cout<<"Age: "<<age<<" Name: "<<name<< endl;
    }  
    virtual void speak(int times)=0;
};

//To do: Create a class named Dog and inherit from Animal in public mode
class Dog:public Animal{

//To do: Create a private variable breed for the dog
  private:
    string breed;
  public:

//To do: Write a parameterized constructor Dog(double age, string breed) and use the constructor of Animal to initialize age
    Dog(double age, string breed):Animal{age},breed{breed}{}

//To do: Write a function named void setName(string name) that sets the name of the Dog
    void setName(string name){
      this->name=name;
    }

//To do: Write a function named print that uses the print from Animal and then also prints the breed in new line
  void print(){
    Animal::print();
    cout<<"Breed: "<<breed<<endl;
  }
//To do: Implement function speak(int n) that prints bark sepeated by a tab, n number of times
  void speak(int n){
    for (int i=0;i<n;++i) cout<<"bark\t";
    cout<<endl;
  }
};
//To do make a new class name Cow that inherits from animal in public mode
//To do: Write a constructor to set the values of the Animal  
//To do: Implement speak method that makes it moo n number of times separated by a space, 
class Cow: public Animal{
public:
Cow(double age, string name):Animal{age,name}{}

void speak(int n){
  for (int i=0;i<n;++i) cout<<"moo\t";
  cout<<endl;
}
};

int main() {
  //To do: Create a dog , set the name, print the information, make it bark 5 times
  Dog d{2,"Poodle"};
  d.setName("Jj");
  d.print();
  d.speak(5);


  //To do: Create a grasshopper , print the information and make it moo 10 times
  Cow c {1,"Cow"};
  c.print();
  c.speak(10);
//To do creata a pointer of Animal class, make it point to Dog object previously created and print the information (Note: To successfully use pointer from base class to derived class, base class should be derived as public)
  Animal *a = &d;
  a->print();
 }