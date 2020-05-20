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
//return the minimum element from the tree lying in the range qs & qe
int query(int *tree,int index, int s,int e,int qs,int qe)
{
  //Total 3 cases
  //1. No Overlap
  if(qs>e || qe<s)
  {
    return INT_MAX;
  }


  //2. Complete Overlap
  if(s>=qs && e<=qe)
  {
    return tree[index];
  }

  //3. Partial Overlap -- call both side
  int mid = (s+e)/2;
  int leftAns = query(tree, 2*index,s, mid, qs, qe);
  int rightAns = query(tree, 2*index+1, mid+1, e, qs, qe);

  return min(leftAns,rightAns);
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
  int s=0;
  int e=n-1;
  buildTree(tree,arr,index,s,e);
  int count;
  cin>>count;
  while(count--)
  {
    int qs,qe;
    cin>>qs>>qe;
    cout<<"Min. Value between range is";
    cout<<query(tree,1,s,e,qs,qe)<<endl;
  }
  return 0;
}
