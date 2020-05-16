#include<bits/stdc++.h>
using namespace std;
void add(list<int> l[],int u,int v)
{
  l[u].push_back(v);
  l[v].push_back(u);
}
void display(list<int> l[],int V)
{
  for(int i=0;i<V;i++)
  {
    cout<<i<<"-->> ";
    for(auto node : l[i])
    {
      cout<<node<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int V;
  cin>>V;
  list<int> l[V];
  int n;
  cin>>n;
  while(n--)
  {
    int u,v;
    cin>>u>>v;
    add(l,u,v);
  }
  display(l,V);
  return 0;
}
