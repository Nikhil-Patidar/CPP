*** write a program binary to decimal number***
#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int bin,i,dec=0;
cout<<"enter bin no.";
cin>>bin;
i=0;
while(bin>0)
{
dec=dec+(bin%10)*pow(2,i);
bin=bin/10;
i++;
}
cout <<"\n dec no.="<<dec;
getch();
}