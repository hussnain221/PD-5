#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int header();
int menu();

main()
{
  system("cls");
  int option;
  float deposit;
  float withdraw;
  float balance=0;
  int pass=header();
  if(pass==0)
  {
   return 0;
  }

while(true)
 {
  option=menu();
  if(option==1)
  {
    cout<<"Enter Deposit Amount: $";
    cin>>deposit;
    balance=balance+deposit;
    cout<<"Amount Depositted Successfully!!!";
  }

  if(option==2)
  {
    cout<<"Enter Withdrawal Amount: $";
    cin>>withdraw;
    balance=balance-withdraw;
    cout<<"Amount withdraw Successful!!!";
    cout<<endl<<"Remaining Balance: $"<<balance;
  }

  if(option==3)
  {
    cout<<"Current Balance: $"<<balance;
  }

  if(option==4)
  {
    cout<<".......EXITTED......."<<endl;
    return 0;
  }

  if(option!=1 && option!=2 && option!=3 && option!=4)
  {
    cout<<"Enter Valid Option.... ";
  }

  cout<<endl;
  cout<<"Press Any Key To Continue...";
  getch();
  
 }
}

int header()
{
cout<<endl;
cout<<"*************************************************************************************************************************************";
cout<<"|%|-------------------------------------------------------------------------------------------------------------------------------|%|";
cout<<"|%|                                                BANK MANAGEMENT SYSTEM                                                         |%|";
cout<<"|%|-------------------------------------------------------------------------------------------------------------------------------|%|";
cout<<"*************************************************************************************************************************************";
cout<<endl<<endl;
 string name,password;
  cout<<"Enter your Name: ";
  cin>>name;
  cout<<"Enter Password: ";
  cin>>password;
  
  if(password=="****")
  {
  cout<<endl<<"<<----WELCOME! "<<name<<"---->>"<<endl<<endl;
  cout<<"-------------------------------------------------------------------------------------------------------------------------------------";
  }

  else
  {
  cout<<"Incorrect Password.";
  return 0;
  }

}

int menu()
{
cout<<endl<<endl;
cout<<" 1. DEPOSIT"<<endl;
cout<<" 2. WITHDRAW"<<endl;
cout<<" 3. CHECK CURRENT BALANCE"<<endl;
cout<<" 4. EXIT"<<endl;
int option;
cout<<endl<<"ENTER YOUR OPTION TO PROCEED: ";
cin>>option;
return option;
}