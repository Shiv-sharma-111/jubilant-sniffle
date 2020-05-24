#include<bits/stdc++.h>
using namespace std;
long long solve(long long a,long long n)
{
  if(n==0)
  {
    return 1;
  }
  long long result = solve(a,n/2);
  if(n%2)
  {
    return result*result*a;
  }
  else
  {
    return result*result;
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
    long long a,n;
    cin>>a>>n;
    cout<<solve(a, n)<<"\n";
  }
  return 0;
}
