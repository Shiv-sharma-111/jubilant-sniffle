#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int solve(long long a,long long b)
{
  return ((a%mod)+(b%mod))%mod;
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
