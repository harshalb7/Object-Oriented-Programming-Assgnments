/*EXCEPTION HANDLING
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
#include<string.h>
using namespace std;
class info
{
	float age;
	float salary;
	char name[50];
	char vehicle[10];
	char city[10];
	int result;
	
	public:
		info()
		{
			age=0;
			salary=0;
			strcpy(name,"ABCD");
			strcpy(vehicle,"y");
		}
		
		void get_info()
		{
			cout<<"\n\tEnter Name:";
			cin.getline(name ,50);
			cout<<"\tEnter Age:";
			try
			{
				cin>>age;
				if(age<18 || age >55)
				{
					throw age;
				}
			}
			catch( float)
			{
				cout<<"\n\tInvalid Age!!!!!!!\n";
				cout<<"\tEnter Correct Age:";
				cin>>age;
			}
			cout<<"\tEnter Salary:";
			try
			{
				cin>>salary;
				if(salary<50000 || salary>100000)
					throw salary;
			}
			catch( float)
			{
				cout<<"\n\tInvalid Salary!!!!!!!\n";
				cout<<"\tEnter valid Salary:";
				cin>>salary;
			}
			cout<<"\n\tDoes he have Vehicle:";
			cin>>vehicle;
			
			cout<<"\n\tEnter City:";
			try
			{
				cin>>city;
				if(strcmp(city,"mumbai")!=0 &&strcmp(city,"pune")!=0 && strcmp(city,"nashik")!=0 && strcmp(city,"nagpur")!=0 					&&		strcmp(city,"delhi")!=0)
				throw city;	
			}
			catch(char city[])
			{
				cout<<"\n\tInvalid Citys!!!!!!!\n";
				cout<<"\n\tEnter Valid City:";
				cin>>city;
			}
		}
		
		void display()
		{
			cout<<"\n\tName\tAge\tSalary\tVehicle\tCity\n";
			cout<<"\n\t"<<name<<"\t"<<age<<"\t"<<salary<<"\t"<<vehicle<<"\t"<<city<<endl;
			
		}
};

int main()
{
	info in;
	in.get_info();
	in.display();
}

	//OUTPUT
/*
		Enter Name:harshal
	Enter Age:7

	Invalid Age!!!!!!!
	Enter Correct Age:18
	Enter Salary:40000

	Invalid Salary!!!!!!!

	Enter valid Salary:60001
	Does he have Vehicle:n
	Enter City:ayrangabad

	Invalid Citys!!!!!!!

	Enter Valid City:nashik

	Name	Age	Salary	Vehicle	City

	harshal	18	60001	n	nashik

*/

