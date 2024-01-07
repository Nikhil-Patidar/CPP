***Write a program ***
#include<stdio.h>
#include<conio.h>
void main()
{
int limit,i;
clrscr();
printf("enter LIMIT");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
if(i%2==1)
printf("%d",i);
getch();
}
