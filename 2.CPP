*** Write a program simple interest***

#include<stdio.h>
#include<conio.h>
 void main()
 {
  int p,t;
  float I,r;
  clrscr();
  printf("Enter the value of P:");
  scanf("%d",&p);
  printf("Enter the value of T:");
  scanf("%d",&t);
  printf("Enter the value of R:");
  scanf("%f",&r);
  I=(p*t*r/100);
  printf("A simple intrest is %f",I);
  getch();
 }