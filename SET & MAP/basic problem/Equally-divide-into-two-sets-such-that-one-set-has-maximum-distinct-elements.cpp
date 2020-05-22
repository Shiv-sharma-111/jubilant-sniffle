#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> vec,int n)
{
  unordered_set<int> mp;
  for(int i=0;i<n;i++)
  {
    mp.insert(vec[i]);
  }
  int k =mp.size();
  return min(n/2,k);
}
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
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
      cin>>vec[i];
    }
    cout<<solve(vec,n)<<"\n";
  }
  return 0;
}
