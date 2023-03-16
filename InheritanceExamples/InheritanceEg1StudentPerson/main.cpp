#include<iostream>
#include<string>
using namespace std;

class Person
{
	int id;
	string name;

	public:
		void set_p()
		{
      cout<<endl<<"Enter the Id:";
			cin>>id;
			cout<<"Enter the Name:";
			getline(cin>>ws,name);
		}

		void display_p()
		{
			cout<<endl<<id<<"\t"<<name;
		}
};

class Student: Person
{
	string course;
	int fee;
	public:
	void set_s()
		{
			set_p();
			cout<<"Enter the Course Name:";
			getline(cin>>ws,course);
			cout<<"Enter the Course Fee:";
			cin>>fee;
		}
		
		void display_s()
		{
			display_p();
			cout<<"\t"<<course<<"\t"<<fee;
		}
};

int main()
{
	Person p;
  
  p.set_p();
  p.display_p();
  Student s;
	s.set_s();
	s.display_s();
	return 0;
}
