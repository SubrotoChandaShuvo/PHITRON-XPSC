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
        int n, cnt = 0, z = 0;
        ll sum = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                cnt++;
            if (v[i] == 0)
                z++;
            sum += v[i];
        }
        if (sum > 0)
            cout << cnt;
        else if (cnt == n)
            cout << 0;
        else if ((z + cnt) == n)
            cout << 0;
        else
            cout << cnt;
        cout << endl;
    }
    return 0;
}