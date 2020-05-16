#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n)
{
  for(int i=1;i<n;i++)
  {
    int nextposition=i;
    while(nextposition>0 && arr[nextposition]<arr[nextposition-1])
    {
      swap(arr[nextposition],arr[nextposition-1]);
      nextposition=nextposition-1;
    }
  }
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
  InsertionSort(arr,n);
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
}
//5
// 12 45 3 -43 0
