// Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    int l = 0, r = 0, ans = 0;
    while (n > r)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            while (sum > s)
            {
                sum -= v[l];
                l++;
                /* code */
            }
        }
        r++;
    }
    cout << ans;

    return 0;
}