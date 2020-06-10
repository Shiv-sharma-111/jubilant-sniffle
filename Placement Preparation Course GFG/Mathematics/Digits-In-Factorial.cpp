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
    int n;
    cin>>n;
    double ans = 0;
    for(int i=1;i<=n;i++)
    {
      ans += log10(i);
    }
    cout<<floor(ans)+1<<"\n";
  }
  return 0;
}
