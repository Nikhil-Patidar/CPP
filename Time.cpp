#include<iostream>
using namespace std;
class time{
int hr,min,sec;
public:
void setdata(int a,int b,int c){
    cout<<"Enter the time : ";
hr=a;
min=b;
sec=c;
}
int display(){
    cout<<"\nTime is : "<<hr<<" "<<min<<" "<<sec;
    return 0;
}
time operator+(time t2){
    time temp;
    temp.hr=hr+t2.hr;
    temp.min=min+t2.min;
    temp.sec=sec+t2.sec;
    temp.narmalize();
    return (temp);
}
void narmalize(){
    min=min+sec/60;
    sec=sec%60;
    hr=hr+min/60;
    min=min%60;
}
};
int main(){
    time t1,t2,t3;
    t1.setdata(4,35,26);
    t2.setdata(3,36,50);
    t1.display();
    t2.display();
    t3=t1+t2;
    t3.display();
    return 0;
}