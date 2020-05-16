//occurences of 5 in eqaul to number of zero in factorial 100 or
//any larger value
#include <bits/stdc++.h>
#define ull long long int
using namespace std;
int main()
{
  ull n;
  cin>>n;
  ull count=0;
  while(n>=5)
  {
    n=n/5;
    count+=n;
  }
  cout<<count<<endl;
}
