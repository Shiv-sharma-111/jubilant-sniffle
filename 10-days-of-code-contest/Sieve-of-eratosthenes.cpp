#include<bits/stdc++.h>
using namespace std;
//brute force approach give complexity 0(n*sqrt(n))
void prime_seive(int *p)
{
  //O(n*log(log(n))) which is approximetaly linear
  // first mark all the odd number
  //can be prime
  for(int i=3;i<=1000000;i=i+2)
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
  p[0]=p[1]=0;
}
int main()
{
  int n;
  cin>>n;
  int p[1000006]={0};
  prime_seive(p);
  for(int i=0;i<=n;i++)
  {
    if(p[i]==1)
    {
      cout<<i<<" ";
    }
  }
  return 0;
}
