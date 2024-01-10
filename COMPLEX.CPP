#include<iostream.h>
#include<conio.h>

class complex
{
	public:
	int a,b;
	complex(){}
	complex(int x,int y)
	{
		a=x;
		b=y;
	}
	void display(complex c1,complex c2)
	{
		cout<<"\nThe addition of two complex number is : ";
		cout<<c1.a+c2.a<<"+";
		cout<<c1.b+c2.b<<"i";
	}
};
void main()
{
	 int x2,y2,x1,y1;
	clrscr();
  cout<<"Enter the first real and imaginary number : ";
  cin>>x2>>y2;
  cout<<"\nEnter the second real and imaginary number : ";
  cin>>x1>>y1;
	complex c1(x2,y2);
	complex c2(x1,y1);

	c2.display(c1,c2);
	getch();
}