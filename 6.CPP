***Write a program factorial of any given number ***

#include<stdio.h>
#include<conio.h>
void main()
{
 int f=1,n,i;
 clrscr();
 printf("Enter the value of number : ");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 {
   f= f*i;
 }
 printf("%d",f);
 getch();

}