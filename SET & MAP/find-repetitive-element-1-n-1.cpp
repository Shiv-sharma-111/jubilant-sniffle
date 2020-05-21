//Use a hash table to store elements visited. If a seen element appears again, we return it.
#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n)
{
  unordered_set<int> mp;
  for(int i=0;i<n;i++)
  {
    if(mp.find(arr[i])!=mp.end())
    {
      return arr[i];
    }
    mp.insert(arr[i]);
  }
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
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<solve(arr,n)<<"\n";
  }

  return 0;
}

//Time Complexity : O(n)
//Auxiliary Space : O(n)
