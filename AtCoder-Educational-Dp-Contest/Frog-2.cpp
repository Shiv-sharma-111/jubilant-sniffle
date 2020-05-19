#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
int solve(vector<int> vec,int n,int k)
{
  vector<int> dp(n+1);
  dp[1]=0;
  for(int i=2;i<=n;i++)
  {
    dp[i]=inf;
    for(int j=i-1;j>=1 && (i-j)<=k ; j--)
    {
      dp[i] = min(dp[i],abs(vec[i]-vec[j])+dp[j]);
    }
  }
  return dp[n];
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n,k;
  cin>>n>>k;
  vector<int> vec(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>vec[i];
  }
  cout<<solve(vec,n,k);
  return 0;
}
