#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return hcf(b,a%b);
  }
}
int lcm(int a,int b)
{
  return (a*b)/hcf(a,b);
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
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
      arr[i]=i;
    }
    int ans=arr[1];
    for(int i=2;i<=n;i++)
    {
      ans=lcm(ans,arr[i]);
    }
    cout<<ans<<"\n";
  }
  return 0;
}
