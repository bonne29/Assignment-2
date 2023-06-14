#include <iostream>
#include <string>


using namespace std;

struct Students
{
	string firstName;
	string lastName;
	long unsigned int regNo;
	int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
	string status;
}student[3];


void viewStudents() 
{
	int null;
    if (int student=null) 
	{
        cout<<"\nNo students available."<<endl;
    }

    cout<<"\nAvailable students:"<<endl;
    for (const auto& student:student) 
	{
        cout<<"\nRegistration Number: "<<student.regNo<<endl<<"Name: "<< student.firstName<< " " <<student.lastName<<endl;
    }
}

 void addstudentresults() 
 {
    for (int i = 0; i < 2; i++) 
	{
        cout << "Enter results for student " << i + 1 << ":" << endl;
        cout << "Subject 1: ";
        cin >> student[i].subject1;
        cout << "Subject 2: ";
        cin >> student[i].subject2;
        cout << "Subject 3: ";
        cin >> student[i].subject3;
        cout << "Subject 4: ";
        cin >> student[i].subject4;
        cout << "Subject 5: ";
        cin >> student[i].subject5;
        cout << endl;
    }
}
    
void viewstudentsinfo() 
{
    for (int i = 0; i < 2; i++) 
	{
        cout << "Student " << i + 1 << " Information:" << endl;
        cout << "First name: " << student[i].firstName << endl;
        cout << "Second name: " << student[i].lastName << endl;
        cout << "Registration Number: " << student[i].regNo << endl;
        
        cout << endl;
    }
}

void updateStudentStatus(int studentIndex) 
{
    int subjectsAbove50 = 0;
    if (student[studentIndex].subject1 >= 50) 
	{
        subjectsAbove50++;
    }
    if (student[studentIndex].subject2 >= 50) 
	{
        subjectsAbove50++;
    }
    if (student[studentIndex].subject3 >= 50) 
	{
        subjectsAbove50++;
    }
    if (student[studentIndex].subject4 >= 50) 
	{
        subjectsAbove50++;
    }
    if (student[studentIndex].subject5 >= 50) 
	{
        subjectsAbove50++;
    }

    if (subjectsAbove50 == 5) 
	{
        student[studentIndex].status = "Pass";
    } 
	else if (subjectsAbove50 >= 3) 
	{
        student[studentIndex].status = "Retake";
    } 
	else 
	{
        student[studentIndex].status = "Supplementary";
    }
}

void viewstudentresults() 
{
    for (int i = 0; i < 2; i++) 
	{
        cout << "Results of student " << i + 1 << ":" << endl;
        cout << "Subject 1: " << student[i].subject1 << endl;
        cout << "Subject 2: " << student[i].subject2 << endl;
        cout << "Subject 3: " << student[i].subject3 << endl;
        cout << "Subject 4: " << student[i].subject4 << endl;
        cout << "Subject 5: " << student[i].subject5 << endl;
        cout << "Status: " << student[i].status << endl;
		cout << endl;	
    }
    
}

void updatestudentresults() 
{
    int studentindex;
    cout << "Enter the index of the student to update: ";
    cin >> studentindex;
    if (studentindex < 1 || studentindex > 2) 
	{
        cout << "Invalid index." << endl;
        return;
    }
    cout << "Enter new results for student " << studentindex << ":" << endl;
    cout << "Subject 1: ";
    cin >> student[studentindex - 1].subject1;
    cout << "Subject 2: ";
    cin >> student[studentindex - 1].subject2;
    cout << "Subject 3: ";
    cin >> student[studentindex - 1].subject3;
    cout << "Subject 4: ";
    cin >> student[studentindex - 1].subject4;
    cout << "Subject 5: ";
    cin >> student[studentindex - 1].subject5;
    updateStudentStatus(studentindex - 1);
    cout << "Results updated for student " << studentindex << endl;
}

void displayMenu() 
{
    cout << "\nChoose the below instructions:"<<endl;
    cout << "1. View Students" <<endl;
    cout << "2. View Student Information" <<endl;
    cout << "3. Update Student Information" <<endl;
    cout << "4. Add Student Results" <<endl;
    cout << "5. View Student Results" <<endl;
    cout << "6. Update Student Results" <<endl;
    cout << "7. Exit" <<endl;
}
int main() 
{
	cout<<"\nEnter the information of students:"<<endl;
	for (int i=0;i<2;i++)
		{
			cout << "\nStudent " << i + 1 << " Information" << endl;
			cout<<"Enter Student's First Name:: ";
			cin>>student[i].firstName;
			cout<<"Enter Student's Last Name:: ";
			cin>>student[i].lastName;
			cout<<"Enter Student's Registration Number:: ";
			cin>>student[i].regNo;
			cout<<"\n--------------------------------------------"<<endl;
		}
	
	int opt;
	
    do 
	{
        displayMenu();
        cout<<"\nEnter your choice: ";
        cin>>opt;
        cin.ignore();  

        switch(opt) 
		{
            case 1:
                viewStudents();
                break;
            case 2:
                viewstudentsinfo();
				break;
			case 3:
			    updateStudentStatus;
				break;
			case 4:
				addstudentresults();
				break;
			case 5:
				viewstudentresults();
				break;
			case 6:
				updatestudentresults();
				break;
			case 7:
				return 0;    
        default:
                cout<<"\nInvalid choice. Please try again."<<endl;
                break;
        }
    } while (opt != 8);

	
	
	
	return 0;
}
