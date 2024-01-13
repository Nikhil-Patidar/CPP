//a and b ,c  d3 class 
#include<iostream>
using namespace std;
class Base{
    public:
   int a;
   int getdataa(){
    cout<<"\nEnter the value of a :";
    cin>>a;
    return a;
   }
   void setdataa(){
    cout<<"the value of  a is : "<<a;  
   }
};
class D1:public virtual Base{
    public:
    int b;
    int getdatab(){
    cout<<"\n\nEnter the value of b :";
    cin>>b;
    return b;
   }
    void setdatab(){
    cout<<"the value of  b is : "<<b;  
   }
};
class D2:public virtual Base{
    public:
    int c;
 int getdatac(){
    cout<<"\n\nEnter the value of c :";
    cin>>c;
    return c;
   }
    void setdatac(){
    cout<<"the value of  c is : "<<c;  
   }

};
class D3:public D1,public D2{
    public:
    int sum;
    void show(){
        cout<<"\n\nthe sum of the a ,b and c : "<<a+b+c;
    }
};
int main(){
    D3 d1;

    d1.getdataa();
    d1.setdataa();
    d1.getdatab();
    d1.setdatab();
    d1.getdatac();
    d1.setdatac();
    d1.show();
    return 0;
}