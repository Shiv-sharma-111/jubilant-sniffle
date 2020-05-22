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
    int n;
    cin>>n;
    unordered_set<int> mp;
    for(int i=0;i<n;i++)
    {
      int k;
      cin>>k;
      mp.insert(k);
    }
    cout<<pow(mp.size(),2)<<"\n";
  }
  return 0;
}
