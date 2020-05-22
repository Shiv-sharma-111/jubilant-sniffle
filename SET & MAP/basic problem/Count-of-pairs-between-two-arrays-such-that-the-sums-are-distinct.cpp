#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n1,n2;
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
      cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
      cin>>arr2[i];
    }
    int count=0,sum;
    unordered_set<int> mp;
    for(int i=0;i<n1;i++)
    {
      for(int j=0;j<n2;j++)
      {
        sum = arr1[i]+arr2[j];
        mp.insert(sum);
      }
    }
    //int k = mp.size();
    cout<<mp.size()<<"\n";
  }
  return 0;
}
