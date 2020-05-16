#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={10,20}; // defined an array
  int *p = arr;      // address of array in p
  (*p++)++;          //
  cout<<arr[0]<<" "<<1[arr]<<" "<<*--p;  //12 20 11
  return 0;
}
// write out put is 11 20 11
