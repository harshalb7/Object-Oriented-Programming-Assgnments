/*implement a class complex which represents the complex number data type . implement the operations like  1.constructor 2.overloaded operator+ and operator* 3. overloaded << and >> to print and read the complex number.
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
using namespace std;
class complex_no
{
	public:
	float img;
	float real;
	complex_no()
	{
		img=0;
		real=0;
	}
	
	void read()
	{
		cout<<"Enter real part of complex no:";
		cin>>real;
		cout<<"Enter imaginary part of complex no:";
		cin>>img;
	}
	
	void display()
	{
		/*cout<<real<<"+"<<img<<"i"<<endl;*/
			
		if(img>0)
		cout<<real<<"+"<<img<<"i"<<endl;
		else
		cout<<real<<"-"<<(img)<<"i"<<endl;
	}
	
	complex_no operator+(complex_no& a)
	{
		complex_no c1;
		c1.real=real+a.real;
		c1.img=img+a.img;
		return c1;
	}
	
	
	complex_no operator-(complex_no& a)
	{
		complex_no c2;
		c2.real=real-a.real;
		c2.img=img-a.img;
		return c2;
	}
	
	
	complex_no operator*(complex_no& a)
	{
		complex_no c3;
		c3.real=real*a.real;
		c3.img=img*a.img;
		return c3;
	}
	friend istream &operator >>(istream& in, complex_no& c);
	friend ostream &operator <<(ostream& out, complex_no& c);	
};
	
	istream &operator >>(istream& in, complex_no& c)
	{
		
		cout<<"Enter real part of complex no:";
		in>>c.real;
		cout<<"Enter imaginary part of complex no:";
		in>>c.img;
	}
	
	ostream &operator >>(ostream& out, complex_no& c)
	{
		
		if(c.img>0)
		out<<c.real<<"+"<<c.img<<"i"<<endl;
		else
		out<<c.real<<"-"<<(c.img)<<"i"<<endl;
	}

int main()
{
	complex_no c4,c5;
	c4.read();
	c4.display();
	c5.read();
	c5.display();
	complex_no c7;
	c7=c4+c5;
	cout<<"The addition of Complex no's:";
	c7.display();
	complex_no c8;
	c8=c4-c5;
	cout<<"The sub of Complex no's:";
	c8.display();
	complex_no c9;
	c9=c4*c5;
	cout<<"The multiplication of Complex no's:";
	c9.display();
}

//OUTPUT
/*
Enter real part of complex no:1
Enter imaginary part of complex no:5
1+5i
Enter real part of complex no:2
Enter imaginary part of complex no:12
2+12i
The addition of Complex no's:3+17i
The sub of Complex no's:-1--7i
The multiplication of Complex no's:2+60i
*/

