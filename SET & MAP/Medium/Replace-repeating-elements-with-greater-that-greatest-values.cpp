#include<bits/stdc++.h>
using namespace std;
void solve(int *arr,int n)
{
  int max = *max_element(arr,arr+n);
  unordered_set<int> mp;
  for(int i=0;i<n;i++)
  {
    if(mp.find(arr[i])==mp.end())
    {
      mp.insert(arr[i]);
    }
    else
    {
      arr[i] = max+1;
      max++;
      mp.insert(arr[i]);
    }
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
    solve(arr,n);
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
    /*
    set<int> set;
    sort(arr,arr+n);
    int count = arr[n-1];
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
      if(set.find(arr[i])==set.end())
      {
        set.insert(arr[i]);
      }
      else
      {
        vec.push_back(count+1);
        count++;
      }
    }
    for(int i=0;i<vec.size();i++)
    {
      set.insert(vec[i]);
    }
    for(auto it = set.begin(); it!=set.end();++it)
    {
      cout<<*it<<" ";
    }*/
  }
  return 0;
}
