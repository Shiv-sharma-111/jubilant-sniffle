#include<bits/stdc++.h>
using namespace std;
//time complexity of this sort O(n^2)
void selectionSort(int *arr,int n)
{
  for(int i=0;i<n-1;i++)
  {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[min]>arr[j])
      {
        min=j;
      }
    }
    swap(arr[i],arr[min]);
  }
}
void selectionSort1(int *arr,int i,int n)
{
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
  //iterative method
  selectionSort(arr,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  selectionSort1(arr,0,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
//5
// 11 34 6 8 -9
