*** write a program avg of three number***

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the value of a,b and c : ");
  scanf("%d %d %d",&a,&b,&c);
  printf("The average of three no. is: ");
  float ave=(a+b+c)/3;
  printf("%f",&ave);
  getch();
}
