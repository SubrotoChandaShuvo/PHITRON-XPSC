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
    ll s;
    cin >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0;
    ll sum = 0;
    int ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
            while (sum >= s  && l <= r)
            {
                ans = min(ans, r - l + 1);
                sum -= v[l];
                l++;
            }
        }
        r++;
    }
    if(ans==INT_MAX)
    cout<<-1;
    else
    cout << ans;

    return 0;
}