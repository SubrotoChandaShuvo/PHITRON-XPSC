// Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m;
        cin >> m;
        vector<int> g(m);
        for (int i = 0; i < m; i++)
        {
            cin >> g[i];
        }
        sort(b.begin(), b.end());
        sort(g.begin(), g.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((b[i] == g[j]) || (b[i] + 1 == g[j]) || (b[i] == g[j] + 1))
                {
                    ans += 1;
                    g[j] = -100;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}