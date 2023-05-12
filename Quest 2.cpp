/*The Program to check if the someone who is above or under 18 is eligible to vote or not*/

#include <iostream>
using namespace std;

//Function declaration

void res(int age)
{
	if (age>=18)
	cout<<"\nYou Are Eligible to Vote";
	else
	cout<<"\nYou Are Not Eligible to Vote";
} 


int main()
{
	//Variable declaration
	int age;
	cout<<"\nEnter Your Age:: ";
	cin>>age;
	
	//Function calling
	res (age);
	return 0;
}