// Subroto chanda
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
        vector<ll> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            ll h;
            cin >> h;
            v[i] -= h;
        }
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            v[i] += g;
        }
        sort(v.begin(), v.end(), greater<ll>());
        int res = 0;
        int f = 0, l = n - 1;
        while (f < l)
        {
            if (v[f] > -1 and v[l] > -1)
            {
                res++;
                f++;
                l--;
            }
            else if (v[f] < 0 and v[l] < 0)
            {
                break;
            }
            else if (v[f] > -1)
            {
                if (v[f] >= abs(v[l]))
                {
                    res++;
                    f++;
                    l--;
                }
                else
                    l--;
            }
        }
        cout << res << endl;
    }
    return 0;
}