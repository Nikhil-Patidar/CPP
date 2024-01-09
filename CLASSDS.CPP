#include<iostream.h>
#include<conio.h>
class employee
{
 private:
 char name[50];
    int code;
    char post[10];
    int salary;
 public:
 void putdata(){
   cout<<"Enter the employee name ";
   cin>>name;
   cout<<"Enter the employee code : ";
   cin>>code;
   cout<<"Enter the employee Designation ";
   cin>>post;
   cout<<"Enter the employee salary : ";
   cin>>salary;
   }
 void getdata(){
    cout<<"All details about Employees\n";
    cout<<"\nemployee Name is "<<name;
    cout<<"\nemployee code is "<<code;
    cout<<"\nemployee designation "<<post;
    cout<<"\nemployee salary "<<salary;

   }
    };
void  main()
{
 clrscr();
   employee E1 E2;
   E1.putdata();
   E1.getdata();


 getch();
}
