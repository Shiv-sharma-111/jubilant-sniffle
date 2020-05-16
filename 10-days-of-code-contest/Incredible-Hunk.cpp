// finding the number of set bits
#include<bits/stdc++.h>
using namespace std;
// first method to count the set bits
// of a given number
int countBits(int n)
{
  int count=0;
  while(n>0)
  {
    if(n&1==1)
    {
      count++;
    }
    n = n>>1;
    //complexity O(log(n))
  }
  return count;
}
// a number n can have at most
// log(n)+1 set bits
// Second and more efficient method
int countBits1(int n)
{
  int count=0;
  while(n>0)
  {
    n = n&(n-1); //this line actully remove the last set bits
    //remove bits right to left
    //complexity O(no. of set bits)
    count++;
  }
  return count;
}
int main()
{
  int n;
  cin>>n;
  cout<<countBits(n)<<endl;
  cout<<countBits1(n)<<endl;
  // third function is inbuilt
  cout<<__builtin_popcount(n);
}
