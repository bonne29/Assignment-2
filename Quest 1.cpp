#include <iostream>
using namespace std;

	float addition(float num1,float num2)
		{
			float r;
			r=num1 + num2;
			return r;
		}
	float subtraction(float num1,float num2)
		{
			float r;
			r=num1 - num2;
			return r;
		}
	float multipication(float num1,float num2)
		{
			float r;
			r=num1 * num2;
			return r;
		}
	float division(float num1,float num2)
		{
			float r;
			r=num1 / num2;
			return r;
		}						
int main()
{
	float num1,num2;
	char op;
	
	cout<<"\nEnter an operator: ( + , - , * , / ):: ";
	cin>>op;
	
	cout<<"\nEnter First Number:: ";
	cin>>num1;
	
	cout<<"\nEnter Second Number:: ";
	cin>>num2;
	
	
		switch(op)
		{
			case '+':
			cout<<"\nThe Answer is:: "<<addition(num1,num2);
				break;
				
			case '-':
			cout<<"\nThe Answer is:: "<<subtraction(num1,num2);
				break;
			
			case '*':
			cout<<"\nThe Answer is:: "<<multipication(num1,num2);
				break;
				
			case '/':
			cout<<"\nThe Answer is:: "<<division(num1,num2);
				break;
				
			default:
			cout << "\nSyntax Error!";
      			break;				
		}
	return 0;
}