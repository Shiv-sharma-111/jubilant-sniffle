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
    int a, b;
    cin>>a>>b;
    double r = ((double(b))/(double(a)));
    int n;
    cin>>n;
    double ans=a;
    for(int i=2;i<=n;i++)
    {
      ans= (ans*r);
    }
    cout<<floor(ans)<<"\n";
  }
  return 0;
}
