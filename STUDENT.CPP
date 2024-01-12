#include<iostream.h>
#include<conio.h>
class Student
{
  public:
  char name[10];
  int roll;
  float persentage;
  static int count;
  void getdata()
  {
   cout<<"\nEnter the name of student is :";
   cin>>name;
   cout<<"Enter the rollnumber of student is : ";
   cin>>roll;
   cout<<"Enter the persentage :";
   cin>>persentage;

  }
  void showdata()
  {
   cout<<"\nStudent name is : "<<name;
   cout<<"\nrollnumber is : "<<roll;
   cout<<"\npersentage is : "<<persentage;
  }
   static int counting()
   {
    return count;
   }
   Student()
   {
    count=count+1;
   }
};
int Student :: count;
void main()
{
  clrscr();
  Student S1,S2;
  S1.getdata();
  S2.getdata();
  S1.showdata();
  S2.showdata();
  cout<<"\nthe number of  funtion call is : "<<Student::counting();
  getch();
}