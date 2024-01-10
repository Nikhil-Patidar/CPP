#include<iostream.h>
#include<conio.h>
class Book
{
  private:
  int id,t;
  float price;
  char Title[10];
  public:
  void getdata(){
   cout<<"\nEnter the Book id : ";
   cin>>id;
   cout<<"\nEnter the Book Title : ";
   cin>>Title;
   cout<<"\nEnter the Book price : ";
   cin>>price;
  }
  int show(){
    cout<<"\nThe Book ID is : "<<id;
    cout<<"\nThe book Title is : "<<Title;
    cout<<"\nThe book price is : "<<price;

  }
};
void main()
{
       clrscr();
       int i,n;
Book b1[10];
cout<<"\nEnter the number of books : ";
cin>>n;
for(i=1;i<=n;i++)
{
b1[i].getdata();
b1[i].show();
}


getch();
}