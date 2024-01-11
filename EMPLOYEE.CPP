#include<iostream.h>
#include<conio.h>
class Employee
{

  int net,id,Da,it;
   float salary;
  char name[10],designation[5];
  public:
  void getdata()
  {
    cout<<"Enter the employee name : ";
    cin>>name;
    cout<<"\nEnter the employee ID : ";
    cin>>id;
    cout<<"\nEnter the designation of the employee : ";
    cin>>designation;
    cout<<"\nEnter the Employee salary : ";
    cin>>salary;
  }
  void netsalary()
  {    cout<<"Enter the Da : ";
     cin>>Da;
     cout<<"Enter the it : ";
     cin>>it;
     net=(salary+Da-it);
  }
  void display()
  {
  cout<<"\n         HERE IS ALL INFORMATION:\nName is : "<<name;
  cout<<"\nEmployee ID is : "<<id;
  cout<<"\nEmployee designation is : "<<designation;
  cout<<"\nthe netsalary is : "<<net;
  }
};

void main()
{
  clrscr();
  Employee E;
  E.getdata();
  E.netsalary();
  E.display();
  getch();
}