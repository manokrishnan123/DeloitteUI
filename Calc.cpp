#include<iostream>
using namespace std;


	
int main()
{
	int num1,num2,total,n;
	
			cout<<"Enter two numbers\n";
		cin>>num1;
		cin>>num2;
		cout<<"Enter the operation"<<endl;
		cout<<"1.Addition\n";
		cout<<"2.Subtraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cin>>n;
	
		switch(n)
		{
			case 1:
				total=num1+num2;
			cout<<"Addition result:"<<total<<endl;
			break;
			case 2:
				total=num1-num2;
			cout<<"Subtraction result:"<<total<<endl;
			break;
			case 3:
				total=num1*num2;
			cout<<"Multiplication result:"<<total<<endl;
			break;
			case 4:
					total=num1/num2;
			cout<<"Division result:"<<total;
			break;
			default:
				cout<<"Invalid";
				break;
		}
	

}
