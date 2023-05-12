#include <iostream>
using namespace std;

void displaycredit(int marks)
{
	if(marks>=91&&marks<=100)
	
		cout<<"\nYour Grade is AA";
	
		else if(marks>=81&&marks<=90)
			
				cout<<"\nYour Grade is AB";
			
		else if(marks>=71&&marks<=80)
			
				cout<<"\nYour Grade is BB";
			
		else if(marks>=61&&marks<=70)
			
				cout<<"\nYour Grade is BC";
			
		else if(marks>=51&&marks<=60)
			
				cout<<"\nYour Grade is CD";
			
		else if(marks>=41&&marks<=50)
			
				cout<<"\nYour Grade is DD";
			
	else 
	
		cout<<"\nFailed";
	
}
int main()
{
	int marks;
	cout<<"\nEnter Your Marks:: ";
	cin>>marks;
	
	displaycredit (marks);
	return 0;
}