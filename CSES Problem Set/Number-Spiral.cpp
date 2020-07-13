#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    long long y,x;
    cin>>y>>x;
    long long z = max(y,x);
    long long z2 = (z-1)*(z-1),ans;
    if(z%2)
    {
      if(y==z)
      {
        ans = z2+x;
      }
      else
      {
        ans = z2+2*z-y;
      }
    }
    else
    {
      if(x==z)
      {
        ans = z2+y;
      }
      else
      {
        ans = z2+2*z-x;
      }
    }
    cout<<ans<<"\n";
  }
  return 0;
}
