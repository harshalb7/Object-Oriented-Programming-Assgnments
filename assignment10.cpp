// program for displaying 100 records,adding,deletion of records ,modification of records ....     
//Name - Harshal Bodhare
//class:-S.E-A        roll no:09.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class inventory
{
	public:
		int record_no;
		char tool_name[20];
		int quantity;
		float cost;
		void get_data();
		void display();
		inventory()
		{
			record_no=0;
			strcpy(tool_name," ");
			cost=0.0;
			quantity=0;
		}
};

void inventory::get_data()
{
	cout<<"\nEnter record no: ";
	cin>>record_no;
	cout<<"\nEnter the name of item: ";
	cin>>tool_name;
	cout<<"\nEnter quantity: ";
	cin>>quantity;
	cout<<"\nEnter cost: ";
	cin>>cost;
}

void dis()
{
	cout<<"\n"<<"   RECORD NO\tTOOL NAME\tQUANTITY\tCOST\n";
}

void inventory::display()
{
	cout<<"\t"<<record_no<<"\t"<<tool_name<<"\t\t"<<quantity<<"\t\t"<<cost<<endl;
}

int main()
{
	inventory t;
	fstream file;
	int wloc,i,ch,no,n,m,loc,dloc;
	char ch1;
	go:
		cout<<"\n========================================================\n";
		cout<<"\nEnter your choice.\n1.Create a file.\n2.Add new item.\n3.Display Inventory.\n4.Modify the Record.\n5.Delete the Record.\n6.Exit."<<endl;
		cout<<"\n========================================================\n";
		cout<<"Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				file.open("hardware.txt",ios::out|ios::in|ios::trunc);
				for(i=0;i<100;i++)
				{
					file.write((char *)&t,sizeof(t));
				}
				file.close();
				cout<<"\nFile is created successfully."<<endl;
				break;

			case 2:
				file.open("hardware.txt",ios::out|ios::in);
				cout<<"\nEnter no. of items to be added: ";
				cin>>no;
				for(i=0;i<no;i++)
				{
					t.get_data();
					wloc=(t.record_no-1)*(sizeof(t));
					if(file.eof())
						file.clear();
					else
					{
						file.seekp(wloc);
						file.write((char *)&t,sizeof(t));
					}
				}
				file.close();
				break;

			case 3:
				file.open("hardware.txt",ios::out|ios::in);
				dis();
				while(!file.eof())
				{
					file.read((char *)&t,sizeof(t));
					t.display();
				}
				file.close();
				break;

            case 4:
                file.open("hardware.txt",ios::out|ios::in|ios::ate);
                cout<<"\nEnter record no. of item to be modified: ";
                cin>>n;
                loc=(n-1)*sizeof(t);
                if(file.eof())
                    file.clear();
                else
                {
                    file.seekp(loc);
                    t.get_data();
                    file.write((char*)&t,sizeof(t));
                }
                cout<<"\nRecord updated successfully!"<<endl;
                file.close();
                break;

            case 5:
                file.open("hardware.txt",ios::out|ios::in|ios::ate);
                cout<<"\nEnter record no. of item to be deleted: ";
                cin>>m;
                dloc=(m-1)*sizeof(t);
                if(file.eof())
                    file.clear();
                else
                {
                    file.seekp(dloc);
                    t.record_no=0;
                    strcpy(t.tool_name," ");
                    t.quantity=0;
                    t.cost=0.0;
                    file.write((char*)&t,sizeof(t));
                }
                cout<<"\nRecord deleted successfully!"<<endl;
                file.close();
                break;

            case 6:
                goto exit;
                break;


		}
		goto go;
        exit:
	return 0;
}
/*        OUTPUT
========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 1

File is created successfully.

========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 2

Enter no. of items to be added: 2

Enter record no: 1

Enter the name of item: abc

Enter quantity: 2

Enter cost: 345

Enter record no: 3

Enter the name of item: pqr

Enter quantity: 45

Enter cost: 6789

========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 3

   RECORD NO	TOOL NAME	QUANTITY	COST
	1	abc		2		345
	0	 		0		0
	3	pqr		45		6789
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0

========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 4

Enter record no. of item to be modified: 3

Enter record no: 2

Enter the name of item: xyz

Enter quantity: 45

Enter cost: 890

Record updated successfully!

========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 5

Enter record no. of item to be deleted: 1

Record deleted successfully!

========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 3

   RECORD NO	TOOL NAME	QUANTITY	COST
	0	 		0		0
	0	 		0		0
	2	xyz		45		890
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0
	0	 		0		0

========================================================

Enter your choice.
1.Create a file.
2.Add new item.
3.Display Inventory.
4.Modify the Record.
5.Delete the Record.
6.Exit.

========================================================
Choice: 6
dell@dell-Inspiron-3542:~$ */

