#include<bits/stdc++.h>
using namespace std;
void buildTree(int *tree,int *arr,int index,int s,int e)
{
  //Base case 1
  if(s>e)
  {
    return;
  }
  //base case 2
  if(s==e)
  {
    tree[index] = arr[s];
    return;
  }
  //recursive case
  int mid = (s+e)/2;
  //left subtree
  buildTree(tree,arr,2*index,s,mid);
  buildTree(tree,arr,2*index+1,mid+1,e);
  int left = tree[2*index];
  int right = tree[2*index+1];

  tree[index] = min(left,right);

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int arr[] = {1,3,2,-2,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  //build the tree array
  int *tree = new int[4*n+1];
  int index=1;
  buildTree(tree,arr,index,0,n-1);
  return 0;
}
