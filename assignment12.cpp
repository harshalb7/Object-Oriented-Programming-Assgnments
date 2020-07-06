// write a program using stl for deque        
//Name - Harshal Bodhare
//CLASS :S.E.A.       ROLL NO=09.
#include<iostream>
#include<deque>
#include<stdlib.h>
using namespace std;
int main()
{
	deque<int>dq;
	deque<int>::iterator it1;
	int ch,x;
	char ch1;
	do 
	{
		cout<<"\n ==========================================";
		cout<<"\n 1.insert element at end\n\t 2.insert element at front\n\t 3.delete element at end";   		 			cout<<"\n\t 4.delete element at front\n\t 5.display first element of deque:";
		cout<<"\n\t 6.display last element of deque\n\t 7.size of deque\n\t 8.display elements in the queue\n:";
		cout<<"\n enter your choice:";
		cin>>ch;
		cout<<"\n ==========================================";
		switch(ch)
		{
			case 1:
			cout<<"\n enter the element you want to insert at end:";
			cin>>x;
			dq.push_back(x);
			break;
			case 2:
			cout<<"\n enter the element you want to insert at front:";
			cin>>x;
			dq.push_front(x);
			break;
			case 3:
			x=dq.back();
			dq.pop_back();
			cout<<"\n element deleted from end:"<<x;
			break;
			case 4:
			x=dq.front();
			dq.pop_front();
			cout<<"\n element deleted from front:"<<x;
			break;
			case 5:
			x=dq.front();
			cout<<"\n element at front:"<<x;
			break;
			case 6:
			x=dq.back();
			cout<<"\n element at back:"<<x;
			break;
			case 7:
			x=dq.size();
			cout<<"\n size of deque:"<<x;
			break;
			case 8:
			for(it1=dq.begin();it1!=dq.end();it1++)
			{
			cout<<*it1;
			}
			cout<<"\n elements of deque:"<<*it1;
		}
		cout<<"\n do you want to continue:(enter y for yes and n for no)";
		cout<<"\n enter your choice:";
		cin>>ch1;
	}while(ch1=='y' || ch1=='Y');
return 0;
}
/*	
==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:1

 ==========================================
 enter the element you want to insert at end:1

 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:1

 ==========================================
 enter the element you want to insert at end:2

 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:2

 ==========================================
 enter the element you want to insert at front:3

 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:2

 ==========================================
 enter the element you want to insert at front:4

 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:3

 ==========================================
 element deleted from end:2
 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:4

 ==========================================
 element deleted from front:4
 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:5

 ==========================================
 element at front:3
 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:6

 ==========================================
 element at back:1
 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:7

 ==========================================
 size of deque:2
 do you want to continue:(enter y for yes and n for no)
 enter your choice:y

 ==========================================
 1.insert element at end
	 2.insert element at front
	 3.delete element at end
	 4.delete element at front
	 5.display first element of deque:
	 6.display last element of deque
	 7.size of deque
	 8.display elements in the queue
:
 enter your choice:8

 ==========================================31
 elements of deque:2
 do you want to continue:(enter y for yes and n for no)
 enter your choice:n
*/		
