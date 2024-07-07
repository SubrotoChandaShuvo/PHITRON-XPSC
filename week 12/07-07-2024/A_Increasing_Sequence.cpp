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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (v[i] == cnt)
                    cnt++;
                continue;
            }
            cnt++;
            if (v[i] == cnt)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}