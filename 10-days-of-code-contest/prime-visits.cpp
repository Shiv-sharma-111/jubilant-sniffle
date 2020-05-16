#include<bits/stdc++.h>
using namespace std;
void prime_seive(int *p)
{
  for(long long int i=3;i<=1000000;i=i+2)
  {
    p[i]=1;
  }
  for(long long int i=3;i<=1000000;i=i+2)
  {
    if(p[i]==1)
    {
      for(long long int j=i*i;j<=1000000;j=j+i)
      {
        p[j]=0;
      }
    }
  }
  //special cases
  p[2]=1;
  p[1]=p[0]=0;
}

int main()
{
  int p[1000006]={0};
  prime_seive(p);
  //cout<<"hii";
  int T;
  cin>>T;
  while(T--)
  {
    int a,b;
    cin>>a>>b;
    for(long long int i=a;i<=b;i++)
    {
      if(p[i]==1)
      {
        //cout<<"hii";
        cout<<i<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
