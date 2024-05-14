/* Q.11 Implement bank management system using classes and inheritance
	1. Saving Account.  2. Current Account. ( Account ,Deposition,
	Withdrawal, Balance Enquiry ).   */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Account{
	char Name[25],Atype[20];
	char AccountNo[30];
     public :
	void getAccountDetails(){
	   cout<<"\n  Fill Account Holder Details->"<<endl;
	   cout<<"      Name  : ";
	   gets(Name);
	   cout<<"      Account Number : ";
	   cin>>AccountNo;
	   cout<<"      Account Type : ";
	   cin>>Atype;
	}
	void DisplayDitails(){
	   cout<<"\n\n\n  Show Your Ditails->"<<endl;
	   cout<<"      Name : "<<Name<<endl;
	   cout<<"      Account Number : "<<AccountNo<<endl;
	   cout<<"      Account Type : "<<Atype<<endl;
	}
};
class Current_Account: public Account{
	int Current_Balance,cb,W_Amount;
      public:
	 Current_Account(){
	   Current_Balance=500;
	 }
	void C_Display(){
	  cout<<"    Your Current Balance : " <<Current_Balance;
	}
	void C_Diposit(){
	  cout<<"  Enter Deposit Amount :";
	  cin>>cb;
	  Current_Balance+=cb;
	}
	void C_Withdrawal(){
	   cout<<"  Enter Withdrawal Amount :";
	   cin>>W_Amount;
	   if(Current_Balance>500){
	     cout<<"      Withdrawal Amount : "<<W_Amount<<endl;
	     Current_Balance-=W_Amount;
	   }
	   else{
	    cout<<"  Insufficient Amount ! ";
	   }
	}
};
class Saving_Account: public Account{
	int Saving_Balance,sb,W_Amount;
      public:
	  Saving_Account(){
	    Saving_Balance=1000;
	  }
	void S_Display(){
	  cout<<"    Your Current Balance : " <<Saving_Balance;

	}
	void S_Diposit(){
	  cout<<"  Enter Deposit Amount :";
	  cin>>sb;
	  Saving_Balance+=sb;
	}
	void S_Withdrawal(){
	   cout<<"  Enter Withdrawal Amount :";
	   cin>>W_Amount;
	   if(Saving_Balance>1000){
	     cout<<"  Withdrawal Amount : "<<W_Amount<<endl;
	     Saving_Balance-=W_Amount;
	   }
	   else{
	    cout<<"  Insufficient Amount ! ";
	   }
	}
};

void main(){
    char c1,A_type;
    clrscr();
   do{
      clrscr();
      cout<<"\n\n  Option To Open Account "<<endl;
      cout<<"      1.Current Account \n      2.Saving Acount";
      cout<<"\n  Choose Your Choice (S/C) : ";
      cin>>A_type;
      switch(A_type){
	case 's' :
		  int ch1;
		  char c2;
		  Saving_Account SA;
		  SA.getAccountDetails();
	       do{
		  cout<<"\n   :: Account Menu ::"<<endl;
		  cout<<"\n      1.Balance Enquiry \n      2.Diposit \n      3.Withdrawal";
		  cout<<"\n  Enter Your Choice :";
		  cin>>ch1;
		  switch(ch1){
		    case 1:clrscr();
			   SA.DisplayDitails();
			   SA.S_Display();
			   break;
		    case 2:SA.S_Diposit();
			   break;
		    case 3:SA.S_Withdrawal();
			   break;
		    default:
			   cout<<"  Invalid Choice !!!";
		  }
		  cout<<"\n\n  Do You Want To Continue ....(Y/N) :";
		  cin>>c2;
		}while(c2=='Y'||c2=='y');
		 break;
	case 'c':int ch2;
		 char c3;
		 Current_Account CA;
		 CA.getAccountDetails();
	      do{
		 cout<<"\n   :: Account Menu ::"<<endl;
		 cout<<"\n      1.Balance Enquiry \n      2.Diposit \n      3.Withdrawal";
		 cout<<"\n  Enter Your choice : ";
		 cin>>ch2;
		 switch(ch2){
		   case 1:clrscr();
			  CA.DisplayDitails();
			  CA.C_Display();
			  break;
		   case 2:CA.C_Diposit();
			  break;
		   case 3:CA.C_Withdrawal();
			  break;
		   default:
			   cout<<"  Invalid Choice !!!";
		 }
		 cout<<"\n\n  Do You Want To Continue....(Y/N):";
		 cin>>c3;
	       }while(c3=='Y'||c3=='y');
		 break;
	default:
		cout<<"  Invalid Type ..!";
      }
      cout<<"\n  Want To Change Your Account Type (Y/N) :";
      cin>>c1;
    }while(c1=='Y'||c1=='y');
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n                  **Thank You For Choosing This Bank**";
  getch();
}
