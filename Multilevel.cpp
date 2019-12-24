#include<iostream>
using namespace std;

class Person
{
	private:
			char name[20],place[30];
	public:
		void Getinfo()
		{
		
			cout<<"Enter the name\n";
			cin>>name;
			cout<<"Enter the place\n";
			cin>>place;
		}
	
		void Showinfo()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Place: "<<place<<endl;
		}
};

class Employee:public Person
{
	private:
		int empno;
	public:
	void GetEmp()
	{
		Person::Getinfo();
		cout<<"Enter Employee number\n";
		cin>>empno;
	}

	void ShowEmp()
	{
		
		cout<<"Employee number: "<<empno<<endl;
	}
	
};

class Manager: public Employee
{
	private:
	char qual[20];
	public:
		void GetQual()
		{
		Employee::GetEmp();
		cout<<"Enter the qualification";
		cin>>qual;
	}
	void ShowQual()
	{
		
		Person::Showinfo();
		Employee::ShowEmp();
		cout<<"Qualification: "<<qual<<endl;
	}
};


main()
{
	Manager manager;
	manager.GetQual();
	manager.ShowQual();
}
