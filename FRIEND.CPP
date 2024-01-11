#include<iostream.h>
#include<conio.h>
class num2;
class num1
{
  private:
   int n1;
   public:
   num1()
   {
     cout<<"Enter the first number :";
     cin>>n1;
   }
   friend void greater(num1,num2);
};
     class num2
{
    private:
    int n2;
    public:
   num2()
   {
     cout<<"Enter the second number :";
     cin>>n2;
   }
   friend void greater(num1,num2);
};
   void greater(num1 N1,num2 N2)
   {
     int a,b;
     a=N1.n1;
     b=N2.n2;

    if(a>b)
    {
    cout<<"first number"<<a<<"is greater";
    }
    else
    cout<<"second number"<<b<<"is greater";
   }
  void main()
  {
   clrscr();
   num1 N1;
   num2 N2;
   greater(N1,N2);
   getch();
  }
