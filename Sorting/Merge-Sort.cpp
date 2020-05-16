#include<bits/stdc++.h>
using namespace std;
//Time complexity O(n*log(n));
void merge(int *arr,int s,int e)
{
  //first find the mid point
  int mid = (s+e)/2;
  //initialize the value'
  int i=s,j=mid+1,k=s;
  //we will use temporary array to store the value;
  int temp[100];
  while(i<=mid && j<=e)
  {
    if(arr[i]>arr[j])
    {
      temp[k]=arr[j];
      k++;
      j++;
    }
    else
    {
      temp[k]=arr[i];
      i++;
      k++;
    }
  }
  while(i<=mid)
  {
    temp[k++]=arr[i++];
  }
  while(j<=e)
  {
    temp[k++] = arr[j++];
  }
  //now finally copy the temporary array into the main array
  for(int i=s;i<=e;i++)
  {
    arr[i]=temp[i];
  }
}
void MergeSort(int *arr,int s,int e)
{
  if(s>=e)
  {
    return;
  }
  //first step
  int mid = (s+e)/2;
  //second step
  MergeSort(arr,s,mid);
  MergeSort(arr,mid+1,e);
  //third and final step
  merge(arr,s,e);
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
  MergeSort(arr,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
//5
// 12 45 3 -43 0
