#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(string str,string out)
{static int i=1;
if(str.size()==0)
{
cout<<i<<":"<<out<<endl;
i++;
return;
}
for(int i=0;i<str.size();i++)
{
permute(str.substr(1),out+str[0]);
rotate(str.begin(),str.begin()+1,str.end());
}
}
int main()
{
string str="test";
permute(str,"");
return 0;
}
