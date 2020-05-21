#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  long long n;
  cin>>n;
  while(n!=1)
  {
    cout<<n<<" ";
    if(n%2==0)
    {
      n=n/2;
    }
    else
    {
      n=(3*n)+1;
    }
  }
  cout<<n;
  return 0;
}
// Note that the newline "\n" works faster than endl, because endl always causes
//a flush operation.
