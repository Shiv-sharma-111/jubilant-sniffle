#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  long long n,s=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    s = (s*2)%mod;
  }
  cout<<s<<"\n";
  return 0;
}
