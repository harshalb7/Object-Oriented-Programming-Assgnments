/*develope an object  oriented program in c++ to STORE & DISPLAY information of bank account holder.
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
#include<string.h>
using namespace std;
class bank_data
{
	public:
	char name[100],account_type[10];
	long int account_no,balance;	
	bank_data()
	 {
	 	strcpy(name,"abcd");
	 	account_no=000;
	 	balance=0;
	 	strcpy(account_type,"saving");	
	 }
	 ~bank_data()
	 {}
	 void get_data()
	 {
     		cout<<"Enter the name of account holder:";
     		cin>>name;
     		cout<<"Enter the account No:";
     		cin>>account_no;
     		cout<<"Enter the account type:";
     		cin>>account_type;
     		cout<<"Enter the balance in account:";
     		cin>>balance;
     		cout<<endl;
	 }
	 void deposite_amount()
	 {
	 	int key;
	 	int amt;
	 	cout<<"Enter account no to deposite amount: ";
	 	cin>>key;
	 	if(key==account_no)
	 	{
	 		cout<<"Enter amount to be deposited:";
	 		cin>>amt;
	 		balance=balance+amt;
	 	}
	 }
	 void withdraw_amout()
	 {
	 	int k;
	 	int mt;
	 	cout<<"Enter account no to withdraw amount: ";
	 	cin>>k;
	 	if(k==account_no)
	 	{
	 		if(balance>=1000)
	 		{
	 			cout<<"Enter amount to be withdrawn:";
	 			cin>>mt;
	 			if(mt<balance-1000)
	 			{
	 				balance=balance-mt;
	 			}
	 			else
	 			{
	 				cout<<"Enter amount less than balence"<<endl;
	 			}
	 		}
	 		else
	 		{
	 			cout<<"Insufficient Balence"<<endl;
	 		}
	 	}
	 }
	 void display_information()
	 {
	 
	 	cout<<name<<"\t"<<account_no<<"\t\t"<<account_type<<"\t\t"<<balance<<endl;
	 }
}; 		
int main()
{
	int i,n,a;
	char ch;
	bank_data a1[n];
	cout<<"Enter the no of account holders:";
	cin>>n;
	for(i=0;i<n;i++)
		a1[i].get_data();
	cout<<"Name\tAccount no\tAccount type\tbalance"<<endl;	
	for(i=0;i<n;i++)
		a1[i].display_information();
	do
	{
		cout<<"ENTER"<<endl<<"1.DEPOSITE"<<endl<<"2.WITHDRAW"<<endl<<"3.EXIT"<<endl<<"choice:";
		cin>>a;
		switch(a)
		{
			case 1:
				for(i=0;i<n;i++)
				{
					a1[i].deposite_amount();
					a1[i].display_information();
					break;
				}
				break;
				
			case 2:
				for(i=0;i<n;i++)
				{	
					a1[i].withdraw_amout();
					a1[i].display_information();
					break;
				}
				break;
			case 3:
				break;
		}
		cout<<"\tDo you want to do more?:";
		cin>>ch;
	}while(ch=='y'||ch=='y');
	
	cout<<"Name\tAccount no\tAccount type\tbalance"<<endl;
	for(i=0;i<n;i++)
	{	
		a1[i].display_information();
	}
}

//OUTPUT

/*

Enter the no of account holders:3

Enter the name of account holder:harshal
Enter the account No:111
Enter the account type:saving
Enter the balance in account:1000

Enter the name of account holder:amit
Enter the account No:222
Enter the account type:saving
Enter the balance in account:1200

Enter the name of account holder:abhi
Enter the account No:333
Enter the account type:saving
Enter the balance in account:1300

Name	Account no	Account type	balance
harshal	111		saving		1000
amit	222		saving		1200
abhi	333		saving		1300

ENTER
1.DEPOSITE
2.WITHDRAW
3.EXIT
choice:1

Enter account no to deposite amount: 111
Enter amount to be deposited:2000

harshal	111		saving		3000

	Do you want to do more?:y

ENTER
1.DEPOSITE
2.WITHDRAW
3.EXIT
choice:2

Enter account no to withdraw amount: 111
Enter amount to be withdrawn:123

harshal	111		saving		2877

	Do you want to do more?:n

Name	Account no	Account type	balance
harshal	111		saving		2877
amit	222		saving		1200
abhi	333		saving		1300

*/
