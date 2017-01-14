/*
 * Write a C program for generating the following series : 1, 5, 14, 30, 55, …. ( Logic is 5-1 = 4 = 2*2, 14-5 = 9 = 3*3 and so on )
 */

#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter n";
  int n;
  cin>>n;
  int test=0;
  for(int i=1;i<=n;i++)
  {
    test+=i*i;
    cout<<test<<":";
  }
 cout<<endl;
 return 0;
}