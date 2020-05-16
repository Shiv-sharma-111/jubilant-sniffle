#include<bits/stdc++.h>
using namespace std;
//how can you accept a function inside a function
void compare(int a,int b)
{
  return a>b;
}
 void selectionSort(int arr[],int n,bool (&cmp)(int a,int b))
 {
   if(cmp(arr[i],arr[j]))
   {
     //this is how it's work
   }
 }
// this is the basic example of working of comaparator function
