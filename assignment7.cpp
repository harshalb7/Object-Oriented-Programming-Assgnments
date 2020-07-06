/*Sorting Using class template.
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
using namespace std;
template<class T>
class sorting
{
	public:
		T array[100];
		int i;
		int j;
		int n;
		int k;
		void read();
		void display();
		void sort();
};	
	template<class T>
	void sorting<T>::read()
	{
		cout<<"\tEnter number of elements in Array:";
		cin>>n;
		cout<<"Enter the elements of Array"<<endl;
		for(i=0;i<n;i++)
			cin>>array[i];
	}
	template<class T>
	void sorting<T>::sort()
	{
		cout<<"Elements of array are:"<<endl;
		for(i=0;i<n;i++)
			cout<<array[i]<<"\t";
		cout<<"\nSorting process"<<endl;
		for(i=0;i<n;i++)
			{
				cout<<"Step "<<i+1<<":\t";
				int index_min=i;
				for(j=i+1;j<n;j++)
				{
					if(array[j]<array[index_min])
						index_min=j;
				}
					T temp;
					temp=array[i];
					array[i]=array[index_min];
					array[index_min]=temp;
						
						for(k=0;k<n;k++)
							cout<<array[k]<<"\t";
						cout<<endl;
			}
	}	
int main()
{
	int ch;
	do
	{
		cout<<"\n\tEnter the choice:"<<"\n\t1.Integer Sorting"<<"\n\t2.Float Sorting"<<"\n\t3.Charcter Sorting"<<"\n\t4.EXIT";
		cout<<"\n\tChoice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				sorting<int>e1;
				e1.read();
				e1.sort();
				break;
			case 2:
				sorting<float>e2;
				e2.read();
				e2.sort();
				break;
			case 3:
				sorting<char>e3;
				e3.read();
				e3.sort();
				break;
				
			case 4:
				break;
		}
	}
		while(ch<4);
		return 0;
}

//OUTPUT
/*
	Enter the choice:
	1.Integer Sorting
	2.Float Sorting
	3.Charcter Sorting
	4.EXIT
	Choice:1
	Enter number of elements in Array:4
Enter the elements of Array
1
5
6
3
Elements of array are:
1	5	6	3	
Sorting process
Step 1:	1	5	6	3	
Step 2:	1	3	6	5	
Step 3:	1	3	5	6	
Step 4:	1	3	5	6	

	Enter the choice:
	1.Integer Sorting
	2.Float Sorting
	3.Charcter Sorting
	4.EXIT
	Choice:2
	Enter number of elements in Array:3
Enter the elements of Array
11.3
12.8
14.3
Elements of array are:
11.3	12.8	14.3	
Sorting process
Step 1:	11.3	12.8	14.3	
Step 2:	11.3	12.8	14.3	
Step 3:	11.3	12.8	14.3	

	Enter the choice:
	1.Integer Sorting
	2.Float Sorting
	3.Charcter Sorting
	4.EXIT
	Choice:3
	Enter number of elements in Array:4
Enter the elements of Array
z
a
s
c
Elements of array are:
z	a	s	c	
Sorting process
Step 1:	a	z	s	c	
Step 2:	a	c	s	z	
Step 3:	a	c	s	z	
Step 4:	a	c	s	z	

	Enter the choice:
	1.Integer Sorting
	2.Float Sorting
	3.Charcter Sorting
	4.EXIT
	Choice:4
*/
