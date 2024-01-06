***Write a program swapping ***
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter the value of a = ");
 scanf("%d",&a);
 printf("Enter the value of b = ");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("the value of a = %d\nthe value of b = %d",a,b);
 getch();
}