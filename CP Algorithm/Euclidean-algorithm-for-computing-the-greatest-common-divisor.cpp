#include<bits/stdc++.h>
using namespace std;
long long solve(long a,long b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return solve(b,a%b);
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    long long a,b;
    cin>>a>>b;
    cout<<solve(a,b)<<"\n";
  }
  return 0;
}
