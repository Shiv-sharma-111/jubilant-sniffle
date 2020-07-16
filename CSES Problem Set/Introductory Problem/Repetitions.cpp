#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string str;
  cin>>str;
  int ans=1,c=0;
  char l = 'A';
  for(char d: str)
  {
    if(d == l)
    {
      ++c;
      ans = max(ans,c);
    }
    else
    {
      l = d;
      c = 1;
    }
  }
  cout<<ans<<"\n";
  return 0;
}
