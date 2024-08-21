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
        int ma[n][n - 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ma[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            mp[ma[i][n - 2]]++;
        }
        int idx, val = 0;
        for (auto u : mp)
        {
            // cout << u.second<<" ";
            if (u.second == 1)
            {
                continue;
            }
            else
            {
                val = u.first;
                break;
            }
        }
        for (int i = 0; i < n ; i++)
        {
            if (ma[i][n - 2] != val)
            {
                idx = i;
                break;
            }
        }
        // cout << val << "  ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << ma[idx][i] << " ";
        }
        cout << val << endl;
    }
    return 0;
}