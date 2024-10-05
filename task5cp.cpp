#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void header();
int menu();

main()
{
  system("cls");
  int option;
  float deposit;
  float withdraw;
  float balance=0;
  header();

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
    return 0;
  }

  else
  {
    cout<<"Enter Valid Option.... ";
  }
  cout<<endl;
  cout<<"Press Any Key To Continue...";
  getch();
  
 }
}

void header()
{
cout<<endl;
cout<<"*************************************************************************************************************************************";
cout<<"|%|-------------------------------------------------------------------------------------------------------------------------------|%|";
cout<<"|%|                                                BANK MANAGEMENT SYSTEM                                                         |%|";
cout<<"|%|-------------------------------------------------------------------------------------------------------------------------------|%|";
cout<<"*************************************************************************************************************************************";
cout<<endl<<endl;
 string name;
  cout<<"Enter your Name: ";
  cin>>name;
  cout<<endl<<"<<----WELCOME! "<<name<<"---->>"<<endl<<endl;
  Sleep(500);
  cout<<"-------------------------------------------------------------------------------------------------------------------------------------";
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