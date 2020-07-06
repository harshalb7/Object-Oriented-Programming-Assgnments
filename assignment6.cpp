/*C++ program using virtual functions
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
using namespace std;

class publication
{
 protected:
  char title[20];
  float price;
	public:
  	 virtual void getdata()=0;
  	 virtual void disdata()=0;

};

class book : virtual public publication 
  {
    protected:
    	int count;

    public:
     void getdata()
	{
	  cout<<"\tenter the title of book:";
	  cin>>title;
	  cout<<"\tenter the price of book:";
	  cin>>price;
	  cout<<"\tenter no of pages:";
	  cin>>count;
	}
   void disdata()
	{
	  cout<<"\ntitle of book is:"<<title;
	  cout<<"price of book is:"<<price;
	  cout<<"pages of book is:"<<count;
	}
  };
class tape: virtual public publication
  {
    protected:
      float time;
    public:
      void getdata()
	{
	  cout<<"enter playinf time(in min):";
	  cin>>time;
	}
      void disdata()
	{
	  cout<<"\npplaying time of audio book:"<<time;
	}
};





int main()
  {
     publication *p[100];
	int j=0,ch,n;
	  do
	    {
		cout<<"\n1.book";
		cout<<"\n2.tape";
		cout<<"\n3.display";
		cout<<"\n\nenter the choice";
		cin>>ch;

	  switch(ch)
	     {
		case 1:
		  cout<<"\nbook";
		  p[j]=new book();
		  p[j]->getdata();
		  j++;
		  break;
		  
		case 2:
		  cout<<"\ntape";
		  p[j]=new tape();
		  p[j]-> getdata();
		  j++;
		  break;

		case 3:
		  cout<<"\ndisplay list";
		  n=j;
			
		   for(j=0;j<n;j++)
		     {
			p[j]->disdata();
		     }
		  break;
	     }
	   }while(ch<4);		
	  return 0;
  }
  
  /*
  OUTPUT
  
  1.book
2.tape
3.display

enter the choice1

book	enter the title of book:SEA
	enter the price of book:130
	enter no of pages:500

1.book
2.tape
3.display

enter the choice2

tapeenter playinf time(in min):12

1.book
2.tape
3.display

enter the choice3

display list
title of book is:SEA
price of book is:130
pages of book is:500
playing time of audio book:12
1.book
2.tape
3.display

enter the choice4
EXIT
*/

