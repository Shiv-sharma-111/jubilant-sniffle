#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  set<long long> s;
  for(int i=0;i<n;i++)
  {
    long long k;
    cin>>k;
    s.insert(k);
  }
  int ans = s.size();
  cout<<ans<<"\n";
}
