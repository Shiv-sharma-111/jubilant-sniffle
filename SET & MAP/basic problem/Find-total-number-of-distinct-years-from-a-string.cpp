#include<bits/stdc++.h>
using namespace std;
int solve(string str)
{
  //istringstream ss(str);
  string str1 = "";
  //unordered_set<string> mp;
  int count=0;
  for(int i=0;i<str.size();i++)
  {
    if(isdigit(str[i]))
    {
      str1.push_back(str[i]);
    }
    if(str[i]=='-')
    {
      str1.clear();
    }
    if(str1.size()==4)
    {
      count++;
      str1.clear();
    }
  }
  return count;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    string str;
    getline(cin,str);
    cout<<solve(str)<<"\n";
  }
  return 0;
}
