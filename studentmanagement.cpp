#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//Structure defining

//For students
struct student
{
 string firstname;//for student first name
 string lastname;//for student last name
 string Registration;//for Registration No number
 string classes;//for class info
 string year;//for student year
 string schoolbranch;//for students school branch
 string datadate;//for data entered date
}studentData;//Variable of student type




//Main function

int main()
{

int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{ 
 system("cls");//Clear screen

//Level 1-Display process 

 cout<<"\n\n\t\t\tSTUDENT MANAGEMENT\n\n";
 cout<<"Enter your choice: "<<endl;
 cout<<"1.Students information"<<endl;
 cout<<"2.Exit program"<<endl;
 cin>>choice;

system("cls");//Clear screen


switch(choice)//First switch
{
 
case '1': //Student
 { 
while(1)//inner loop-1
{ 
system("cls");//Clear screen
//Level-2 display
cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display entry\n";
cout<<"3.Back to main menu\n";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 cin>>studentData.firstname;
 cout<<"Enter Last name: ";
 cin>>studentData.lastname;
 cout<<"Enter Registration number: ";
 cin>>studentData.Registration;
 cout<<"Enter Class: ";
 cin>>studentData.classes;
 cout<<"Enter Year: ";
 cin>>studentData.year;
 cout<<"Enter School Branch: ";
 cin>>studentData.schoolbranch;
 cout<<"Enter Data Date: ";
 cin>>studentData.datadate;
 f1<<studentData.firstname<<endl<<studentData.lastname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl<<studentData.year<<endl<<studentData.schoolbranch<<endl<<studentData.datadate<<endl;
 cout<<"Data successfully stored"<<endl;
 cout<<"Do you want to enter another data? "<<endl;
 cout<<"Press Y for Continue and N to Finish:  ";
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	cin>>choice;
 }
}
} 
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); 

cout<<"Enter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.firstname);

if(studentData.firstname==find)
{
 notFound = 1;
 cout<<"First Name: "<<studentData.firstname<<endl;
 getline(f2,studentData.lastname);
 cout<<"Last Name: "<<studentData.lastname<<endl;

 getline(f2,studentData.Registration);
 cout<<"Registration No number: "<<studentData.Registration<<endl;
 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl;
 getline(f2,studentData.year);
 cout<<"Year: "<<studentData.year<<endl;
 getline(f2,studentData.schoolbranch);
 cout<<"School Branch: "<<studentData.schoolbranch<<endl;
 getline(f2,studentData.datadate);
 cout<<"Date Entered: "<<studentData.datadate<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop    
}




case '2':
{
break;//outer case 3
}//outer case 3
}   
break;//outer loop
}


}

