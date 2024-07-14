// Subroto Chanda Shuvo
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
        int n;
        cin >> n;
        vector<ll> v(n);
        ll tot = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                tot += v[i];
            }
            else if (v[i] < 0)
            {
                ll k = min(tot, -v[i]);
                v[i] += k;
                tot -= k;
            }
        }

        tot = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
                tot += abs(v[i]);
        }
        cout << tot<< endl;
    }
    return 0;
}