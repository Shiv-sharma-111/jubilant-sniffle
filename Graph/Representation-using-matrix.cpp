#include<bits/stdc++.h>
using namespace std;

void add(int arr[][100],int u,int v)
{
  arr[u][v]=1;
  arr[v][u]=1;
}
void display(int arr[][100],int V)
{
  for(int i=0;i<V;i++)
  {
    cout<<i<<" :";
    for(int j=0;j<V;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int V;
  cin>>V;
  int arr[V][100]={0};
  int Edge;
  cin>>Edge;
  while(Edge--)
  {
    int u;int v;
    cin>>u>>v;
    add(arr,u,v);
  }
  display(arr,V);
  return 0;
}
