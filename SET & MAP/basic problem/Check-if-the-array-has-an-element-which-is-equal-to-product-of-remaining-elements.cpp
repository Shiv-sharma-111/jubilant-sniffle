#include<bits/stdc++.h>
using namespace std;
bool CheckArray(int *arr,int n)
{
  int p=1;
  unordered_set<int> mp;
  for(int i=0;i<n;i++)
  {
    p = p*arr[i];
    mp.insert(arr[i]);
  }
  int root = sqrt(p);
  if(root*root == p)
  {
    if(mp.find(root)!=mp.end())
    {
      return true;
    }
  }
  return false;
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
    if (CheckArray(arr, n))
        cout << "YES";
    else
        cout << "NO";
  }
  return 0;
}
