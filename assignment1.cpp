/*develope an object  oriented program in c++ to create a database of a student information.
HARSHAL B. BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
using namespace std;
class student
{
	public :
	int rno,srno[10];
	long int tele;
	char clas[10],name[10],bgrp[10],DOB[10],div[10];
	//char address1[20];
	friend void display(student &obj)
	{
		cout<<"Data of students is as follows"<<endl<<"----------------------------"<<endl;
		cout<<obj.rno<<endl;
		cout<<obj.name<<endl;
		cout<<obj.DOB<<endl;
		cout<<obj.bgrp<<endl;
		cout<<obj.clas<<endl;
		cout<<obj.div<<endl;
		//cout<<obj.address1<<endl;
		cout<<obj.tele<<endl;
	}
	student()
	{
		static int count=0 ;
		int rno=0;
		cout<<"\nBegin construction of data ";
		rno=count;
		count++;
	}
	~student()
	{
		cout<<"\ndestruction of data";
	}
	void count1()
	{
		cout <<"\ncount = ";
	}
	student(int rno)
	{
		this->rno=rno;
	}
	void get_data()
	{
		cout << "\nEnter the roll no :";
		cin>>rno;
		cout << "Enter the name :";
		cin >> name;
		cout<<"Enter the date of birth : ";
		cin>>DOB;
		cout<<"Enter the blood group : ";
		cin>> bgrp;
		cout<<"Enter the class : ";
		cin >> clas;
		cout<<"Enter the div : ";
		cin >> div;
		cout<<"Enter the telephone no : ";
		cin>>tele;
	}
};
int main()
{
	student s1;
	/*student s2(s1);
	cout<<"Enter data for first student";
	s1.get_data();
	cout<<"Student details";
	display(s2);*/
	student *s[50];
	int i,n;
	cout<<"\nHow many students do you want to enter : ";
	cin>>n;
	cout<<"\nEnter the data for students"<<endl<<"----------------------------"<<endl;
	for(i=0;i<n;i++)
	{
		s[i]=new student();
	}
	for(i=0;i<n;i++)
	{
		s[i]->get_data();
	}
	for(i=0;i<n;i++)
	{
		display(*s[i]);
	}
	for(i=0;i<n;i++)
	{
		delete(s[i]);
	}
	return 0;
}
//OUTPUT
/*
Begin construction of data 
How many students do you want to enter : 2

Enter the data for students
----------------------------

Begin construction of data 
Begin construction of data 
Enter the roll no :1
Enter the name :harshal
Enter the date of birth : 12-04-2001
Enter the blood group : B
Enter the class : SE-A
Enter the div : A
Enter the telephone no : 7057819906

Enter the roll no :2   
Enter the name :amit
Enter the date of birth : 23-11-2000
Enter the blood group : B
Enter the class : SE-A
Enter the div : A
Enter the telephone no : 7066608669
Data of students is as follows
----------------------------
1
harshal
12-04-2001A
B
SE-A
A
7057819906
Data of students is as follows
----------------------------
2
amit
23-11-2000A
B
SE-A
A
7066608669

destruction of data
destruction of data			
*/		
