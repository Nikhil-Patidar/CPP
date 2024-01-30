#include<iostream.h>
#include<conio.h>
void main()
{
  int n,r,sum=0;
  clrscr();
  cout<<"enter any number:";
  cin>>n;
   int temp=n;
  while(n!=0)
{
  r=n%10;
  sum=sum+r*r*r;
  n=n/10;
}
  if(temp==sum)
  cout<<"\n Number is  Armstrong "<<sum;
  else
  cout<<"\n Number is Not Armstrong"<<sum;
  getch();
}
