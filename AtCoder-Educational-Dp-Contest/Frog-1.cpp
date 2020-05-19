#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
int solve(vector<int> vec,int n)
{
  vector<int> dp(n+1);
  dp[1]=0;
  for(int i=2;i<=n;i++)
  {
    int option1 = abs(vec[i]-vec[i-1])+dp[i-1];
    int option2 =(i==2)?inf: abs(vec[i]-vec[i-2])+dp[i-2];
    dp[i]=min(option1,option2);
  }
  return dp[n];
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  vector<int> vec(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>vec[i];
  }
  cout<<solve(vec,n);
  return 0;
}
