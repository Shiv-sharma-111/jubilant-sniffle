#include<bits/stdc++.h>
using namespace std;
void decimalToRoman(int n)
{
  int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  char *symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  int i=0;
  while(n)
  {
    while(n/arr[i])
    {
      cout<<symbol[i];
      n=n-arr[i];
    }
    i++;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int j,n;
  cin>>j>>n;
  int ans = j+n;
  //Now convert ans into the roman numbers
  decimalToRoman(ans);
  return 0;
}
