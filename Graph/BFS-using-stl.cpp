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
void BFS(vector<int> vec[],int V,int s)
{
  bool *visited = new bool[V];
  for(int i=0;i<V;i++)
  {
    visited[i]=0;
  }
  visited[s]=1;
  queue<int> queue;
  queue.push(s);
  while(!queue.empty())
  {
    int k = queue.front();
    queue.pop();
    cout<<k<<" ";
    for(auto node : vec[k])
    {
      if(visited[node]!=1)
      {
        visited[node]=1;
        queue.push(node);
      }
    }
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
  //display(vec,V);
  BFS(vec,V,2);
  return 0;
}
