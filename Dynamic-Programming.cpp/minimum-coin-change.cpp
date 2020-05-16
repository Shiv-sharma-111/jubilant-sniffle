#include<bits/stdc++.h>
using namespace std;
int arr1[100];
int Recursion(int *coins,int n)
{
  if(n==0)
  {
    return 0;
  }
  int p1,p2,p3;
  p1=p2=p3=INT_MAX;
  if(n>=coins[0])
  {
    p1= Recursion(coins,n-coins[0])+1;
  }
  if(n>=coins[1])
  {
    p2= Recursion(coins,n-coins[1])+1;
  }
  if(n>=coins[2])
  {
    p3= Recursion(coins,n-coins[2])+1;
  }
  return min({p1,p2,p3});

}
//Time complexity for both topdown
// and bottom is O(T*N);
int Topdown(int *coins,int n)
{
  if(n==0)
  {
    arr1[0]=0;
  }
  //lookup
  if(arr1[n]!=0)
  {
    return arr1[n];
  }
  int p1,p2,p3;
  p1=p2=p3=INT_MAX;
  if(n>=coins[0])
  {
    p1= Recursion(coins,n-coins[0])+1;
  }
  if(n>=coins[1])
  {
    p2= Recursion(coins,n-coins[1])+1;
  }
  if(n>=coins[2])
  {
    p3= Recursion(coins,n-coins[2])+1;
  }
  arr1[n]=min({p1,p2,p3});
  return arr1[n];

}
int main()
{
  int n;
  cin>>n;
  int coins[]={1,7,10};
  int size=3;
  //cout<<Recursion(coins,n)<<endl;
  cout<<Topdown(coins,n)<<endl;
  return 0;
}
