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

//update the value of a perticular node
 void updateNode(int *tree,int index,int s,int e,int i,int value)
 {
   //No Overlap
   if(i<s || i>e)
   {
     return;
   }
   // Reached leaf node
   if(s==e)
   {
     tree[index] = value;
     return;
   }
   // Lying in the range - i is lying between s and e
   int mid = (s+e)/2;
   updateNode(tree,2*index,s,mid,i,value);
   updateNode(tree, 2*index+1, mid+1, e,i, value);
   tree[index] = min(tree[2*index],tree[2*index+1]);
   return;
 }

 //Range update
 // You will be given a range rs and re
 // and you increament every in the range by a value v
 void updateRange(int *tree,int index,int s,int e,int rs,int re, int inc)
 {
   //No Overlap
   if(re<s || rs>e)
   {
     return;
   }
   //Reached leaf node
   if(s==e)
   {
     tree[index] +=inc;
     return;
   }
   // Lying in Range - Call both sides
   int mid = (s+e)/2;
   updateRange(tree,2*index,s,mid,rs,re,inc);
   updateRange(tree,2*index+1,mid+1,e,rs,re,inc);
   tree[index] = min(tree[2*index],tree[2*index+1]);
   return;
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
  updateRange(tree,index,s,e,1,2,4);
  //updateNode(tree,index,s,e,3,8);  // Update node working is fine
  while(count--)
  {
    int qs,qe;
    cin>>qs>>qe;
    cout<<"Min. Value between range is";
    cout<<query(tree,1,s,e,qs,qe)<<endl;
  }
  return 0;
}
//Time Complexity
//build function O(n);
//query function O(log(n));
// updateNode O(log(n))  worst cases
// updateRange O(n*log(n));
