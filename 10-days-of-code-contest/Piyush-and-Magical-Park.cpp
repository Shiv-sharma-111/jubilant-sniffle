#include<bits/stdc++.h>
using namespace std;
void magicalPark(char arr[][100],int m,int n,int k,int s)
{
  bool success = true;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      //char ch = arr[i][j];
      if(s<k)
      {
        //success = false;
        //break;
        cout<<"No"<<endl;
      }
      else if(arr[i][j]=='.')
      {
        s=s-2;
      }
      else if(arr[i][j]=='*')
      {
        s=s+5;
      }
      else
      {
        break;
      }
      if(j!=n-1)
      {
        s--;
      }
    }
  }
  //if(success=true)
    cout<<"Yes"<<endl;
    cout<<s<<endl;
}
int main()
{
  int m,n,k,s;
  cin>>m>>n>>k>>s;
  char park[100][100];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>park[i][j];
    }
  }
  magicalPark(park,m,n,k,s);
  return 0;

}
