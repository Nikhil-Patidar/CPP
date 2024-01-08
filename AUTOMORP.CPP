#include<iostream.h>
#include<conio.h>
void main()
{
 int n,sqr,temp,flag=0;
 cin>>n;
 sqr=n*n;
 temp=n;
 while(temp>0)
 {
   if(temp%10 !=sqr%10)
   {
    flag=1;
    break;
   }
   temp=temp/10;
   sqr=sqr/10;

 }
 if(flag==1)
 cout<<n<<"not an antomorphic number";
 else
 cout<<"the number is antomprphic ";
 getch();
}