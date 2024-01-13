#include<iostream>
using namespace std;
class Student{
    
    int roll_no,age;
    string name;
    public:
    void getdata(){
        cout<<"Enter the student name : ";
        cin>>name;
        cout<<"Enter the student roll number : ";
        cin>>roll_no;
        cout<<"Enter the student age : ";
        cin>>age;
    }
};
class Exam:public Student{
       public:
    string s1,s2,s3,s4,s5,s6;
    int n1,n2,n3,n4,n5,n6;
 
    void getsub(){
        cout<<"Enter the 1st subject name : ";
        cin>>s1;
        cout<<"Enter the 2nd subject name : ";
        cin>>s2;
        cout<<"Enter the 3rd subject name : ";
        cin>>s3;
        cout<<"Enter the 4th subject name : ";
        cin>>s4;
        cout<<"Enter the 5th subject name : ";
        cin>>s5;
        cout<<"Enter the 6th subject name : ";
        cin>>s6;
        
    }
    void getmarks(){
        cout<<"\nEnter marks of "<<s1<<" : ";
        cin>>n1;
        cout<<"\nEnter marks of "<<s2<<" : ";
        cin>>n2;
         cout<<"\nEnter marks of "<<s3<<" : ";
        cin>>n3;
        cout<<"\nEnter marks of "<<s4<<" : ";
        cin>>n4;
        cout<<"\nEnter marks of "<<s5<<" : ";
        cin>>n5;
        cout<<"\nEnter marks of "<<s6<<" : ";
        cin>>n6;
    }
};
class Result:public Exam{
    int sum;
    public:
    void result(){
        cout<<"...........Show the result............. \n";
        cout<<"The sum of the all marks : ";
        sum=n1+n2+n3+n4+n5+n6;
        cout<<sum;
        if(sum>=550){
            cout<<"A";
        }
        else if(sum>=500){
            cout<<"B";
        }
        else if(sum>=)
    }

};
int main(){
    Result S;
    S.getdata();
    S.getsub();
    S.getmarks();
    S.result();
}