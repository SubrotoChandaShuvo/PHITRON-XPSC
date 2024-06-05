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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int sdif = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            sdif += abs(a[i] - a[i + 1]);
        }
        int mdif = sdif;
        for (int i = 0; i < n; ++i)
        {
            int nsum = sdif;
            if (i > 0)
            {
                nsum -= abs(a[i] - a[i - 1]);
                nsum += abs(1 - a[i - 1]);
            }
            if (i < n - 1)
            {
                nsum -= abs(a[i] - a[i + 1]);
                nsum += abs(1 - a[i + 1]);
            }
            mdif = max(mdif, nsum);
            int msum = sdif;
            if (i > 0)
            {
                msum -= abs(a[i] - a[i - 1]);
                msum += abs(k - a[i - 1]);
            }
            if (i < n - 1)
            {
                msum -= abs(a[i] - a[i + 1]);
                msum += abs(k - a[i + 1]);
            }
            mdif = max(mdif, msum);
        }

        cout << mdif << endl;
    }

    return 0;
}