***Write a program greater number using three number ***
#include<stdio.h>
#include<conio.h>
void main()
{
  int p,q,r;
  clrscr();
  printf("enter any number ");
  scanf("%d %d %d",&p,&q,&r);
  if(p>q && p>r)
  printf("p is a greater number");
  else if(q>r && q>p)
  printf("q is a greater number");
  else if(r>p && r>q)
  printf("r is a greater  number");
  getch();
}