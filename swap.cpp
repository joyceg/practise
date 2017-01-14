
#include<iostream>
using namespace std;
int main()
{
cout<<"Enter any two numbers:";
int a,b;
cin>>a>>b;
cout<<endl<<"a="<<a<<" b="<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swapping"<<endl<<"a="<<a<<"b="<<b<<endl;
return 0;
} 

