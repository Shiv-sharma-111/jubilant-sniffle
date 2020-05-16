#include<bits/stdc++.h>
using namespace std;
#define int long long
const int  N = 51;
const int P = 51*30;
int n,k,p;
int a[N][31];
int pref[N][31];
int cache[N][P];
int recursion(int idx,int taken)
{
  if(taken==p)
  {
    return 0;
  }
  if(idx>n || taken>p)
  {
    return -1e9;
  }
  if(cache[idx][taken]!=-1)
  {
    return cache[idx][taken];
  }
  int ans = -1e9;
  for(int i=0;i<=k;i++)
  {
    ans=max(ans,pref[idx][i]+ recursion(idx+1,taken+i));
  }
  return cache[idx][taken] =  ans;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T,k=0;
  cin>>T;
  while(T--)
  {
    k++;
    memset(cache,-1,sizeof(cache));
    cin>>n>>k>>p;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=k;j++)
      {
        cin>>a[i][j];
        pref[i][j]= pref[i][j-1]+a[i][j];
      }
    }
    int ans = recursion(1,0);
    cout<<"Case #"<<k<<": "<<ans<<endl;
  }
  return 0;
}
