#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Book
{
   int Book_no;
   char Book_title[40];
   int Price;

    public:

    int  total_cost(int);
    void input();
    void purchase();

};

void Book ::input()

{
    cout<<"Enter Book Number : ";
    cin>>Book_no;
    cout<<"Enter Book Title : ";
    gets(Book_title);
    cout<<"Enter The Price : ";
    cin>>Price;
    purchase();
}

void Book :: purchase()

{
     int copies;
     cout<<"Enter the number of copies to be purchase : ";
     cin>>copies;

     cout<<"The total cost to the paid by the user : "<<total_cost(copies);

}
int Book :: total_cost(int copies)

{

    return Price*copies;

}
void main()
{
    clrscr();
    Book b;
    b.input();
    getch();
}













