#include<bits/stdc++.h>
using namespace std;
bool solve(string str)
{
  int count=0;
  if(str.length()<8)
  {
    return false;
  }
  for(int i=0;i<str.length();i++)
  {
    if(str[i] =='@' || str[i] =='#' || str[i] =='$' || str[i] =='%' || str[i] =='^' || str[i] =='&' || str[i] =='*' || str[i] =='(' || str[i] ==')' || str[i] =='-' || str[i] =='+')
    {
      count++;
      break;
    }
  }
  for(int i=0;i<str.length();i++)
  {
    if(islower(str[i]))
    {
      count++;
      break;
    }
  }
  for(int i=0;i<str.length();i++)
  {
    if(isupper(str[i]))
    {
      count++;
      break;
    }
  }
  if(count==3)
  {
    return true;
  }
  else
  {
    return false;
  }
}


int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string str;
    getline(cin,str);
    if(solve(str))
    {
      cout<<"Yes String is valid password"<<"\n";
    }
    else
    {
      cout<<"String is not a valid password"<<"\n";
    }
  }
  return 0;
}
