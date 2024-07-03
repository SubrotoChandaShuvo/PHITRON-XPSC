// Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    ll cnt = 0;
    ll l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            cnt += (r - l + 1);
        }
        else
        {
            while (sum > s && l < r)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= s)
            {
                cnt += (r - l + 1);
            }
        }
        r++;
    }
    cout << cnt;

    return 0;
}