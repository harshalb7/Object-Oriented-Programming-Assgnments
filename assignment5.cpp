/*develope an object  oriented program in c++ to create cpparray.
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
using namespace std;
class cpparray
{
	int cp[100],n;
	public:
		int i;
		cpparray()
		{
			cout<<"Enter the size of array:";
			cin>>n;
		}
		int size_array()
		{
			return n;
		}
		friend istream &operator >>(istream &in, cpparray &c);
		friend ostream &operator <<(ostream &out, cpparray &c);
		void operator =( cpparray c)
		{
			if(size_array() == c.size_array())
			{
				for(i=0;i<n;i++)
				{
					cp[i]=c.cp[i];
				}
			}
		}
		int &operator [](int sub_script)
		{
			if(sub_script>n)
			{
				cout<<"ERROR!!!....Element cannot be change"<<endl;
				return cp[n-1];
			}
			else if(sub_script<0)
			{
				cout<<"ERROR!!!....Element cannot be change"<<endl;
				return cp[0];
			}
			else
			{
				int ch;
				cout<<"\nEnter choice:\n1.No change\n2.Change the Element\n";
				cin>>ch;
				switch(ch)
				{
					case 1:
					{
						return cp[sub_script];	
						break;						
					}
					case 2:
					{
						cout<<"Enter the Element";
						cin>>cp[sub_script];
						return cp[sub_script];
						break;
					}
				}
			}	
		}
};
	istream &operator >>(istream &in, cpparray &c)
	{
		int i;
		cout<<"Enter the element of array:"<<endl;
		for(i=0;i<c.n;i++)
		{
			in>>c.cp[i];
		}
	}
	ostream &operator <<(ostream &out, cpparray &c)
	{
		int i;
		cout<<"Element of array:"<<endl;
		for(i=0;i<c.n;i++)
		{
			out<<c.cp[i];
			cout<<endl;
		}
	}
	
int main()
{
	cpparray c1,c2; 
	c1.size_array();
	cin>>c1;
	cout<<c1;
	int a;
	cout<<"Enter the subscript:";
	cin>>a;
	cout<<c1[a]<<endl;
	cout<<c1;
	cout<<endl<<endl;
	cout<<"Copy c1 into c2"<<endl<<endl;
	c2=c1;
	cout<<"Elements of c2 after copy:"<<endl;
	cout<<c2;
	cout<<endl<<endl;
	cout<<"Elements of c1 after copy:"<<endl;
	cout<<c1;
	return 0;
}

//OUTPUT

/*
Enter the size of array:4
Enter the size of array:1
Enter the element of array:
^C
harshal@harshal-H81M-S:~/harshal$ ./a.out
Enter the size of array:4
Enter the size of array:4
Enter the element of array:
1
2
3
4
Element of array:
1
2
3
4
Enter the subscript:2

Enter choice:
1.No change
2.Change the Element
2
Enter the Element5
5
Element of array:
1
2
5
4


Copy c1 into c2

Elements of c2 after copy:
Element of array:
1
2
5
4


Elements of c1 after copy:
Element of array:
1
2
5
4
*/
