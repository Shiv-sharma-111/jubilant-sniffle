#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int wine(int *wines, int i,int j,int y)
{
  //base case
  if(i>j)
  {
    return 0;
    //arr[][]=0;
  }
  //Lookup the array for solution
  if(arr[i][j]!=0)
  {
    return arr[i][j];
  }
  //recursive case
  return arr[i][j]=max((wines[i]*y+wine(wines,i+1,j,y+1)),(wines[j]*y+wine(wines,i,j-1,y+1)));
}
int main()
{
  int wines[]={2,3,5,1,4}; //if you use greedy approach answer is 49
  //but dp is give optimal solution 50
  int n = sizeof(wines)/sizeof(wines[0]);
  int y=1;
  cout<<wine(wines,0,n-1,y)<<endl;
  return 0;

}
