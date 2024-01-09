#include<iostream.h>
#include<conio.h>
class arm
{
 public:
 int n,f,r,arem,temp;
 void getdata()
 {
    cout<<"Enter the any number : ";
    cin>>n;
 }
 void show()
 { temp=n;
 arem=0;
 f=1;
  while(n>0)
  {
     r=n%10;
     for(int i=1;i<=r;i++)
     {
	f=f*i;
     }
     arem=arem+f;
     f=1;
     n=n/10;

  }
   if(temp==arem)
     {
	cout<<"the number is peterson number";

     }
     else cout<<"the number is not peterson number";
 }
};
void main()
{      clrscr();
     arm A;
     A.getdata();
     A.show();
     getch();
}