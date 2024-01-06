***Write a program table***

#include<stdio.h>
#include<conio.h>
void main()
{
  int T,i,a;
  clrscr();
 printf("Enter the number which you want :");
 scanf("%d",&a);
 for(i=1;i<=10;i++)
 {
    T=a*i;
  printf("%d X %d = %d",a,i,T);
    printf("\n");
 }
 getch();
}