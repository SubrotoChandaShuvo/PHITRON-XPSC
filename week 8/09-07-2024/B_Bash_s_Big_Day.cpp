// Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int x = v[i];
        set<int> st;
        for (int j = 2; j * j <= x; ++j)
        {
            if (x % j == 0)
            {
                st.insert(j);
                while (x % j == 0)
                {
                    x /= j;
                }
            }
        }
        if (x > 1)
        {
            st.insert(x);
        }
        for (int k : st)
        {
            mp[k]++;
        }
    }
    int res = 1;
    for (auto [p, q] : mp)
    {
        res = max(res, q);
    }
    cout << res << '\n';
    return 0;
}