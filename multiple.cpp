#include<conio.h>
#include<iostream>
using namespace std;
class person
{
	char name[10];
	int age;
	public:
		void read()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
		}
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class company
{
	char name[10];
	int emp_id;
	public:
		void read()
		{
			cout<<"Enter company name: ";
			cin>>name;
			cout<<"Enter employ ID: ";
			cin>>emp_id;
		}
		void show()
		{
			cout<<"Company name: "<<name<<endl;
			cout<<"Employ ID: "<<emp_id<<endl;
		}
};
class employ:public person,public company
{
	char dept[10];
	float sal;
	public:
		void read()
		{
			person::read();
			company::read();
			cout<<"Enter Department: ";
			cin>>dept;
			cout<<"Enter salary: ";
			cin>>sal;
		}
		void show()
		{
			person::show();
			company::show();
			cout<<"Department: "<<dept<<endl;
			cout<<"Salary: "<<sal<<endl;
		}
};
int main()
{
	employ a1;
	cout<<"Enter information:"<<endl;
	a1.read();
	cout<<"Employ information"<<endl;
	a1.show();
	return 0;
}
