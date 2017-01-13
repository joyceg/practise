#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char input[100];
  cin>>input; 
  int len;
  len=strlen(input)-1;
  cout<<endl<<"The length of the input string is: "<<len<<endl;
  int start,pos;
  for(int i=len;i<=0;i--)
  {cout<<"hello";
    pos=len;
    if(input[i]=='.'||(i==0))
    {
      start=i;
      for(int k=i+1;k<=pos;k++)
	cout<<input[k];
      cout<<"|";
    }
    cout<<"Hello"<<endl;
    
  }
  
}