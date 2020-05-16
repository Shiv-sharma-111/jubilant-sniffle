#include<bits/stdc++.h>
using namespace std;
class Graph
{
  private:
    int V;
    vector<int> *vec;
  public:
    Graph(int V);
    void addEdge(int u,int v);
    void display();
};
Graph::Graph(int V)
{
  this->V=V;
  vec = new vector<int>[V];
}
void Graph:: addEdge(int u,int v)
{
  vec[u].push_back(v);
  vec[v].push_back(u);
}
void Graph:: display()
{
  vector<int>::iterator it;
  for(int i=0;i<V;i++)
  {
    cout<<i<<"-->> ";
    for(it=vec[i].begin();it!=vec[i].end();++it)
    {
      cout<<*it<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  Graph g(5);
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  g.display();
}
