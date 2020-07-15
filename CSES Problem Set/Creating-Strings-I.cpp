#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string str;
  cin>>str;
  int n = str.size();
  // max word that can be made by this string is 36000(about)
   sort(str.begin(),str.end());
   vector<string> vec;
   do{
     vec.push_back(str);
   }while(next_permutation(str.begin(),str.end()));
   cout<<vec.size()<<"\n";
   for(string a: vec)
   {
     cout<<a<<"\n";
   }
  return 0;
}
