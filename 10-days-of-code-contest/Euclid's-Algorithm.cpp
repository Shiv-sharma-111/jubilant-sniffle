#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return gcd(b,a%b);
  }

  // just one line
  //return b==0?a:gcd(b,a%b);
}
//for LCM
// a*b = gcd(a,b)*lcm(a,b);
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
}
