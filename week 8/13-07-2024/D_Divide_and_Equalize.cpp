// Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> pfun(ll a)
{
    vector<ll> fa;
    for (ll i = 2; i * i <= a; i++)
    {
        ll cnt = 0;
        while (a % i == 0)
        {
            cnt++;
            a /= i;
            fa.push_back(i);
        }
    }
    if (a > 1)
        fa.push_back(a);
    return fa;
}
void solve()
{
    int n;
    cin >> n;
    ll ar[n];
    for (ll i = 0; i < n; i++)
        cin >> ar[i];

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> p = pfun(ar[i]);
        for (auto k : p)
            mp[k]++;
    }
    for (auto j : mp)
    {
        if (j.second % n != 0)
            cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}