#include<bits/stdc++.h>
using namespace std;
int arr[100];
int minStep(int n)
{
  if(n==1)
  {
    return 0;
  }
  int op1,op2,op3;
  op1=op2=op3=INT_MAX;
  if(n%3==0)
  {
    op1=minStep(n/3);
  }
  if(n%2==0)
  {
    op2=minStep(n/2);
  }
  op3 = minStep(n-1);
  return min(min(op1,op2),op3)+1;

}
// topdown Approach
int minTopdown(int n)
{
  if(n==1)
  {
    return arr[1]=0;
  }
  //lookup
  if(arr[n]!=0)
  {
    return arr[n];
  }
  //recursive solution
  //compute if arr[n] is not compute
  int op1,op2,op3;
  op1=op2=op3=INT_MAX;
  if(n%3==0)
  {
    op1=minTopdown(n/3);
  }
  if(n%2==0)
  {
    op2=minTopdown(n/2);
  }
  op3 = minTopdown(n-1);
  arr[n]=min({op1,op2,op3})+1;
  return arr[n];
}
//Bottom Up approach
int minBottomup(int n)
{
  int dp[100]={0};
  dp[1]=0;
  for(int i=2;i<=n;i++)
  {
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    if(i%3==0)
    {
      op1 = dp[i/3];
    }
    if(i%2==0)
    {
      op2 = dp[i/2];
    }
    op3 = dp[i-1];
    dp[i]=min({op1,op2,op3})+1;
  }
  return dp[n];
}
int main()
{
  int n;
  cin>>n;
  cout<<minStep(n)<<endl;
  cout<<minTopdown(n)<<endl;
  cout<<minBottomup(n)<<endl;
  return 0;
}
