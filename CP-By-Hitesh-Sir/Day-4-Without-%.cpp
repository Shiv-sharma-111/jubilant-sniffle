#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int x = 400;
  int count=0;
  int ans = 8;
  while(ans<=x)
  {
    ans=ans+8;
    count++;
  }
  cout<<count<<endl;
  return 0;
}
