#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node* left, *right;
};
Node* createNode(int data)
{
  Node* temp = new Node();
  temp->data=data;
  temp->left = temp->right = NULL;
  return temp;
}
Node* buildTree(int In[],int Level[],int s,int e,int n)
{
  if(n<=0)
  {
    return NULL;
  }
  // First node of level order is root
  Node* root = createNode(Level[0]);
  // Search root in inorder
  int index = -1;
  for(int i=s;i<=e;i++)
  {
    if(Level[0]==In[i])
    {
      index = i;
      break;
    }
  }
  // Insert all left nodes in hash table
  unordered_set<int> mp;
  for(int i=s;i<index;i++)
  {
    mp.insert(In[i]);
  }
  // Separate level order traversals
  // of left and right subtrees.
  int lLevel[mp.size()]; // Left
   int rLevel[e-s-mp.size()]; // Right
   int li = 0, ri = 0;
   for (int i=1;i<n;i++) {
       if (mp.find(Level[i]) != mp.end())
           lLevel[li++] = Level[i];
       else
           rLevel[ri++] = Level[i];
   }

   // Recursively build left and right
   // subtrees and return root.
   root->left = buildTree(In, lLevel,
                s, index-1, index-s);
   root->right = buildTree(In, rLevel,
                 index+1, e, e-index);
   return root;
}
void printInorder(Node* root)
{
  if(root==NULL)
  {
    return;
  }
  printInorder(root->left);
  cout<<root->data<<" ";
  printInorder(root->right);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    int In[n],Level[n];
    for(int i=0;i<n;i++)
    {
      cin>>In[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>Level[i];
    }
    Node* root = buildTree(In,Level,0,n-1,n);
    printInorder(root);
  }
  return 0;
}
