#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int count=0;
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<"1"<<"\n";
    return 0;
  }
  if(n==2 || n==3)
  {
    cout<<"NO SOLUTION"<<"\n";
    return 0;
  }
  for(int i=1;i<=n;i=i+2)
  {
    count++;
  }
  for(int i=2;i<=n;i=i+2)
  {
    count++;
  }
  if(count==n)
  {
    for(int i=2;i<=n;i=i+2)
    {
      cout<<i<<" ";
    }
    for(int i=1;i<=n;i=i+2)
    {
      cout<<i<<" ";
    }
    cout<<"\n";
  }
  else
  {
    cout<<"NO SOLUTION"<<"\n";
  }
  return 0;
}
