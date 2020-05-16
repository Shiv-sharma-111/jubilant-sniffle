#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //first row
    cout<<"*";
    for(int j=0;j<((n-3)/2);j++)
    {
      cout<<" ";
    }
    for(int j=0;j<((n+1)/2);j++)
    {
      cout<<"*";
    }
    cout<<endl;  //second pattern
    for(int i=0;i<((n-3)/2);i++)
    {
      cout<<"*";
      for(int j=0;j<((n-3)/2);j++)
      {
        cout<<" ";
      }
      cout<<"*";
      cout<<endl;
    }
    //Third row
    for(int i=0;i<n;i++)
    {
      cout<<"*";
    }
    cout<<endl;
    //fourth row
    for(int k=0;k<((n-3)/2);k++)
    {
      for(int i=0;i<((n-1)/2);i++)
      {
        cout<<" ";
      }
      cout<<"*";
      for(int i=0;i<((n-3)/2);i++)
      {
        cout<<" ";
      }
      cout<<"*";
      cout<<endl;
    }
    //fifth row
    for(int i=0;i<((n+1)/2);i++)
    {
      cout<<"*";
    }
    //cout<<endl;
    for(int i=0;i<((n-3)/2);i++)
    {
      cout<<" ";
    }
    cout<<"*";


}
