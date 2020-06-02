#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n)
{
  for(int i=1;i<n-1;i++)
  {
    for(int j=i-1 ,k=i+1; j>=0 && k<n;)
    {
      if(arr[i]*2 == (arr[k]+arr[j]))
      {
        cout<<arr[j]<<" "<<arr[i]<<" "<<arr[k]<<endl;
        k++;
        j--;
      }
      else if(arr[j]+arr[k]< 2*arr[i])
      {
        k++;
      }
      else
      {
        j--;
      }
    }
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    solve(arr,n);
  }
  return 0;
}
