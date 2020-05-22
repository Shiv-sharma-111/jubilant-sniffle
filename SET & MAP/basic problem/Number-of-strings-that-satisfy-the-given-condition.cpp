#include <bits/stdc++.h>
using namespace std;
int countStrings(int n, int m, string s[])
{
    unordered_set<int> ind;
    for (int j = 0; j < m; j++) {
        int mx = 0;
        for (int i = 0; i < n; i++)
            mx = max(mx, (int)s[i][j] - '0');
        for (int i = 0; i < n; i++)
            if (s[i][j] - '0' == mx)
                ind.insert(i);
    }
    return ind.size();
} 
int main()
{
    string s[] = { "223", "232", "112" };
    int m = s[0].length();
    int n = sizeof(s) / sizeof(s[0]);
    cout << countStrings(n, m, s);
}
