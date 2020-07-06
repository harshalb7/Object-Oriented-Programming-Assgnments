// program using stack for addition of binary numbers
//Name - Harshal Bodhare
//     CLASS:-S.E -A		ROLL NO:-09
#include<iostream>
#include<stack>
using namespace std;
class binary
{
    public:
        stack<int> read;
        void display(stack<int> &s);
        stack<int> add(stack<int> &s1, stack<int> &s2);
};

stack<int>read()
{
    char a[40];
    stack<int> s;
    cout<<"\nEnter binary number:- ";
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1')
            s.push(1);
        else if(a[i]=='0')
            s.push(0);
    }
    return s;
}

void binary::display(stack<int> &s)
{
    cout<<"\nSum of binary numbers = ";
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}

stack<int> add(stack<int> &s1, stack<int> &s2)
{
    stack<int> s;
    int sum,carry=0;
    int bit1, bit2;
    while(!s1.empty() || !s2.empty())
    {
        bit1=bit2=0;
        if(!s1.empty())
        {
            bit1=s1.top();
            s1.pop();
        }
        if(!s2.empty())
        {
            bit2=s2.top();
            s2.pop();
        }
        sum=(bit1+bit2+carry)%2;
        carry=(bit1+bit2+carry)/2;
        s.push(sum);
    }
    if(carry==1)
    {
        s.push(1);
    }
    return s;
}

int main()
{
    binary b;
    stack<int> s1,s2,s3;
    s1=read();
    s2=read();
    s3=add(s1,s2);
    b.display(s3);
    return 0;
}

/* 
	OUTPUT
Enter binary number:- 1001

Enter binary number:- 0001

Sum of binary numbers = 1010
*/S
