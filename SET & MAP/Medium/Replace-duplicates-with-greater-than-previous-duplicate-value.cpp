#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end())
            s.insert(arr[i]);
        else {
            for (int j = arr[i] + 1; j < INT_MAX; j++) {
                if (s.find(j) == s.end()) {
                    arr[i] = j;
                    s.insert(j);
                    break;
                }
            }
        }
    }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    solve(arr,n);
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
