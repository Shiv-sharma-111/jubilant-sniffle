#include<bits/stdc++.h>
using namespace std;
int solve(int *arr,int n,int k)
{
  unordered_set<int> mp;
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    if(arr[i]%k!=0 || mp.count(arr[i]/k)==0)
    {
      mp.insert(arr[i]);
    }
  }
  return mp.size();
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<solve(arr,n,k)<<"\n";
  }
  return 0;
}
