#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> vec[],int u,int v)
{
  vec[u].push_back(v);
  vec[v].push_back(u);
}
void display(vector<int> vec[],int V)
{
  for(int i=0;i<V;i++)
  {
    cout<<i<<"-->>";
    for(auto node : vec[i])
    {
      cout<<node<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int V=5;
  vector<int>vec[V];
  addEdge(vec, 0, 1);
  addEdge(vec, 0, 4);
  addEdge(vec, 1, 2);
  addEdge(vec, 1, 3);
  addEdge(vec, 1, 4);
  addEdge(vec, 2, 3);
  addEdge(vec, 3, 4);
  display(vec,V);
  return 0;
}
