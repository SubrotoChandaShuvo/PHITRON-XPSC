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
        ll n, res = 0;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];
        sort(arr+1, arr +1+ n);
        for (ll s = 1; s <=100; s++)
        {
            ll c = 0;
            for (ll i = 1, j = n ; i < j;)
            {
                if (arr[i] + arr[j] > s)
                    j--;
                else if (arr[i] + arr[j] < s)
                    i++;
                else
                {
                    c++;
                    i++;
                    j--;
                }
            }
            res = max(res, c);
        }
        cout << res << endl;
    }
    return 0;
}