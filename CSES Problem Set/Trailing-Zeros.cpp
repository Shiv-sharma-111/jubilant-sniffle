#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin>>n;
  ll ans=0;
  ll i=5;
  while(i<=n)
  {
    ans += (n/i);
    i = i*5;
  }
  cout<<ans<<"\n";
  return 0;
}
