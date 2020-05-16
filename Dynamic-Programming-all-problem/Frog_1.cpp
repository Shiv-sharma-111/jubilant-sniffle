#include<bits/stdc++.h>
using namespace std;
int minJump(int *arr,int s,int e)
{
  if(s>=e)
  {
    return 0;
  }
  int a = abs(arr[s]-arr[s+1])+minJump(arr,s+1,e);
  int b = abs(arr[s]-arr[s+2])+minJump(arr,s+2,e);
  return min(a,b);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  cin>>n;
  int arr[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>arr[i];
  }
  cout<<minJump(arr,1,n);
  return 0;
}
