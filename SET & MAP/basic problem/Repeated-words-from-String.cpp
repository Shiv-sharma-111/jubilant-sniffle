#include<bits/stdc++.h>
using namespace std;
void solve(string str)
{
  //To split given string into words, we use stringstream in C++.
  // Used to split string around spaces.
    istringstream ss(str);
    unordered_set<string>  hp;
    do {
      string s;
      ss >> s;
      if(hp.find(s)==hp.end())
      {
        hp.insert(s);
        cout<<s<<" ";
      }
    } while(ss);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string str;
  //cin>>str; this is not working because of spaces
  getline(cin,str);
  solve(str);
  return 0;
}
