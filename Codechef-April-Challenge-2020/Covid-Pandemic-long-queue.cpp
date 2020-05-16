#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int n,flag=0;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            if(k==1)
            {
                vec.push_back(i);
            }
        }
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i+1]-vec[i]<6)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


// #define mod 1000000007
