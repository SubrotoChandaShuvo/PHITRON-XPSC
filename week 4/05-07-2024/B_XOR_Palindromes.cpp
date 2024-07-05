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
        string s;
        cin >> s;
        string tem(n + 1, '0');
        int ans = 0;
        int mx1 = 0;
        int mx2 = 0;
        for (int i = 0; i <= n / 2 - 1; i++)
        {
            if (s[i] == s[n - i - 1])
                mx2++;
            else
                ans++;
        }
        if (n % 2 == 1)
            mx1++;
        for (int j = 0; j <= mx2; ++j)
        {
            for (int k = 0; k <= mx1; ++k)
            {
                tem[ans + j * 2 + k] = '1';
            }
        }
        cout << tem << "\n";
    }
    return 0;
}