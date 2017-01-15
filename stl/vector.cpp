#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  
  vector<int> v;
  cout<<"Enter any 5 values";
  int a;
  for(int i=0;i<5;i++)
  {
    cin>>a;
    v.push_back(a);
  }
  
  cout<<endl<<"You have entered"<<endl;
  for(int i=0;i<5;i++)
  {
    cout<<v[i]<<endl;
  }
  sort(v.begin(),v.end());
  v.erase(v.begin()+2);
  vector <int>::iterator low,up;
  low=lower_bound(v.begin(),v.end(),3);
  up=upper_bound(v.begin(),v.end(),4);
  if(low[0]>3)
    cout<<low[0];
}