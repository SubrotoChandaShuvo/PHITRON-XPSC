#include <bits/stdc++.h>
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
        int mx = INT_MIN;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        if (mx == n)
            cout << 0 << endl;
        else
        {
            int cnt = 1;
            while (mx <= n)
            {
                if ((mx * 2) >= n)
                {
                    cnt += (n - mx);
                    break;
                }
                else
                {
                    cnt+=mx;
                    mx*=2;
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}