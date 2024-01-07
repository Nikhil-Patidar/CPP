*** Write a program area  of circle ***

#include<stdio.h>
#include<conio.h>
void main()
{
 int r;
 float area;
 clrscr();
 printf("Enter the value of R :");
 scanf("%d",&r);
 area=3.14*r*r;
 printf("The area of circle is %f",area);
 getch();
}