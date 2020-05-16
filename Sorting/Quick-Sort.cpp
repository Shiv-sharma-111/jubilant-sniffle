//Choose a pivot element
// number greater than pivot is one side
// other is one side
#include<bits/stdc++.h>
using namespace std;
int partition(int  *arr,int s,int e)
{
  //Inplace we can not use extra space

  //choose pivot
  int pivot = arr[e];
  int i=s-1,j=s;
  for(;j<e;j++)
  {
    if(arr[j]<=e)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[e]);
  return i+1;
}
void QuickSort(int *arr,int s,int e)
{
  //base case
  if(s>=e)
  {
    return;
  }
  //recursive case
  int p = partition(arr,s,e);
  //apply for the left part
  QuickSort(arr,s,p-1);
  //apply for the right part
  QuickSort(arr,p+1,e);
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
  QuickSort(arr,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
// 7
// 2 7 8 6 1 5 4
