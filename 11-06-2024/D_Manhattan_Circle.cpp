#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, c = 0, cnt = 0, d = 0;
        cin >> m >> n;

        vector<vector<char>> ar(m, vector<char>(n));

        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> ar[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i][j] == '#')
                {
                    c += i + 1;
                    d += j + 1;
                    cnt++;
                }
            }
        }
        c /= cnt;
        d /= cnt;
        cout << c << " " << d << endl;
    }
    return 0;
}
