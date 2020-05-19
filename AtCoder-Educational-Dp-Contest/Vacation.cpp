#include<bits/stdc++.h>
using namespace std;
struct activity
{
  int A,B,C;
};
int solve(vector<activity> vec,int n)
{
  int dp[n+1][3];
  dp[1][0]=vec[1].A;
  dp[1][1]=vec[1].B;
  dp[1][2]=vec[1].C;
  for(int i=2;i<=n;i++)
  {
    dp[i][0] = vec[i].A+ max(dp[i-1][1],dp[i-1][2]);
    dp[i][1] = vec[i].B + max(dp[i-1][0],dp[i-1][2]);
    dp[i][2] = vec[i].C + max(dp[i-1][0],dp[i-1][1]);
  }
  return max(dp[n][0],max(dp[n][1],dp[n][2]));
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  vector<activity> vec(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>vec[i].A;
    cin>>vec[i].B;
    cin>>vec[i].C;
  }
  cout<<solve(vec,n);
  return 0;
}
