#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  long long n,sum=0;
  cin>>n;
  for(int i=1;i<n;i++)
  {
    int a;
    cin>>a;
    sum+=a;
  }
  long long res = (n*(n+1))/2;
  cout<<(res-sum)<<"\n";
  return 0;
}
