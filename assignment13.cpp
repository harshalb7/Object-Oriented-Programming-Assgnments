// c++ program for sorting and searching with user defined records.search by item code
//Name - Harshal Bodhare
//       CLASS : S.E.A     ROLL NO:09.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class item
{
	public:
	char name[20];
	int quantity;
	int cost;
	int code;
	bool operator ==(const item &i1)
	{
		if(code==i1.code)
			return 1;
		else
			return 0;
	}
	bool operator <(item &i1)
	{
		if(code<i1.code)
			return 1;
		else 
			return 0;
	}
};
vector<item>o1;
void print(item &i1);
void display();
void insert();
void search();
void dlt();

int main()
{
	int ch;
	char ch1;
	do
	{
		cout<<"\n=================================";
		cout<<"\n 1.insert\n\t 2.display\n\t 3.search\n\t 4.sort\n\t 5.delete\n\t 6.exit";
		cout<<"\n enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
				break;
			case 4:
				sort(o1.begin(),o1.end());
				break;
			case 5:
				dlt();
				break;   
			case 6:
				cout<<"\n exit";
		}
		cout<<"\n do you want to continue:enter y or Y for yes:";
		cin>>ch1;
	}while(ch1=='y' || ch1=='Y');
return 0;
}
void insert()
{
	item i1;
	cout<<"\n enter the code:";
	cin>>i1.code;
	cout<<"\n enter the name of the item:";
	cin>>i1.name;
	cout<<"\n enter the quantity:";
	cin>>i1.quantity;
	cout<<"\n enter the cost:";
	cin>>i1.cost;
	o1.push_back(i1);
}
void display()
{
	for_each(o1.begin(),o1.end(),print);
}
void print(item &i1)
{
	cout<<"\n code of the item:"<<i1.code;
	cout<<"\n name of the item:"<<i1.name;
	cout<<"\n quantity of item:"<<i1.quantity;
	cout<<"\n cost of the item:"<<i1.cost;
}
void search()
{
	vector<item>::iterator p;
	item i1;
	cout<<"\n enter the item code to search:";
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		cout<<"\n not found";
	}
	else
	{
		cout<<"\n found";
	}
}
void dlt()
{
	
	vector<item>::iterator p;
	item i1;
	cout<<"\n enter the item code to delete:";
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		cout<<"\n not found";
	}
	else
	{
		o1.erase(p);
		cout<<"\n found";
	}

}
/* OUTPUT
=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:1

 enter the code:2

 enter the name of the item:hammer

 enter the quantity:4

 enter the cost:234

 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:1

 enter the code:1

 enter the name of the item:screw

 enter the quantity:6

 enter the cost:345

 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:2

 code of the item:2
 name of the item:hammer
 quantity of item:4
 cost of the item:234
 code of the item:1
 name of the item:screw
 quantity of item:6
 cost of the item:345
 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:3

 enter the item code to search:1

 found
 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:4

 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:2

 code of the item:1
 name of the item:screw
 quantity of item:6
 cost of the item:345
 code of the item:2
 name of the item:hammer
 quantity of item:4
 cost of the item:234
 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:5

 enter the item code to delete:1

 found
 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:2

 code of the item:2
 name of the item:hammer
 quantity of item:4
 cost of the item:234
 do you want to continue:enter y or Y for yes:y

=================================
 1.insert
	 2.display
	 3.search
	 4.sort
	 5.delete
	 6.exit
 enter your choice:6

 exit
 do you want to continue:enter y or Y for yes:n
*/
