#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[][1000],int n)
{
  for(int i=0;i<n;i++)
  {
    int j=0,k=n-1;
    while(j<k)
    {
      swap(arr[i][j],arr[i][k]);
      j++;
      k--;
    }
  }
  //take transpose
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i<j)
      {
        swap(arr[i][j],arr[j][i]);
      }
    }
  }
}
void reverseStl(int arr[][1000],int n)
{
  for(int i=0;i<n;i++)
  {
    reverse(arr[i],arr[i]+n);
  }
  //take transpose
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i<j)
      {
        swap(arr[i][j],arr[j][i]);
      }
    }
  }
}
void display(int arr[][1000],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<arr[i][j]<<" ";
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int arr[1000][1000];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  //without STL
  reverseArray(arr,n);
  reverseStl(arr,n);
  display(arr,n);
}
