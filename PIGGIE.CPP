#include<iostream.h>
#include<conio.h>
class piggiebank
{
 public:
 int amount;
 piggiebank()
 {
 amount=50;
 }
 piggiebank(int a)
 {
   amount=amount+50;
 }
 void display()
 {

 cout<<"Total amount of money in piggie bank :";
 cout<<amount;
 }
};
void main()
{
clrscr();
piggiebank p1();
piggiebank p2(100);
p2.display();
getch();
}