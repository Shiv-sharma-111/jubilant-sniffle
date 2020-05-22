#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int a,int b)
{
  unordered_set<int> mp;
  int sum1=0,sum2=0;
  for(int i=0;i<n;i++)
  {
    if(mp.find(arr[i])==mp.end())
    {
      mp.insert(arr[i]);
      sum1 +=arr[i];
    }
    sum2+=arr[i];
  }
  sum1 = a*sum1;
  return (sum1-sum2)/(a-b);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<solve(arr,n,a,b)<<"\n";
  }
  return 0;
}
