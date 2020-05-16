#include<bits/stdc++.h>
using namespace std;
// define a comparator function
bool compare(int a,int b)
{
  cout<<"These are comparison "<<endl;
  cout<<a<<" "<<b;
    cout<<endl;
  return a>b;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //complexity is much more efficient

  sort(arr,arr+n,compare);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
//5
// 11 34 6 8 -9
