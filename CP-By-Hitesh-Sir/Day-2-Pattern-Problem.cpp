#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;   // n is always even
  cin>>n;
  for(int i=0;i<=(n/2);i++)
  {
    for(int j=0;j<2;j++)
    {
      for(int k=1;k<=(n-(2*i))/2;k++)
      {
        cout<<" ";
      }
      for(int k=1;k<=2*i;k++)
      {
        cout<<"*";
      }
      for(int k=1;k<=(n-(2*i))/2;k++)
      {
        cout<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
