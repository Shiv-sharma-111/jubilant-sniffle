#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;++i)
    {
      cin>>arr[i];
    }
    int count[2]={0};
    for(int i=1;i<=n;++i)
    {
      count[arr[i]%2]++;
    }
    if(count[0] && count[1])
    {
      cout<<"No"<<endl;
    }
    else
    {
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}
