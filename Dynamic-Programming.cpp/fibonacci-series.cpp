#include<bits/stdc++.h>
using namespace std;
int arr[100];
//space complexity O(n)
//Time complexity O(2^n)
int fiboRecursion(int n)
{
  if(n==1 || n==0)
  {
    return n;
  }
  return fiboRecursion(n-1)+fiboRecursion(n-2);
}
//space O(n)
//Time complexity O(n)
//This will calculate n=76
int fiboTopdown(int n)
{
  if(n==0 || n==1)
  {
    arr[n]=n;
    return arr[n];
  }
  //lookup into the array
  if(arr[n]!=0)
  {
    return arr[n];
  }
  arr[n]=fiboTopdown(n-1)+fiboTopdown(n-2);
  return arr[n];
}
//this does not use recursion
//space O(n)
//Time complexity O(n)
int fiboBottomup(int n)
{
  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<=n;i++)
  {
    arr[i]=arr[i-1]+arr[i-2];
  }
  return arr[n];
  // we can do space optimization
  //because we need only two variable
  // to calculate the third one

}
int main()
{
  int n;
  cin>>n;
  cout<<fiboRecursion(n)<<endl;
  cout<<fiboTopdown(n)<<endl;
  cout<<fiboBottomup(n)<<endl;
  return 0;
}
