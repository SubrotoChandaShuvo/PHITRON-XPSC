#include <bits/stdc++.h>
using namespace std;
char fun(int s)
{
    return ('a' + (s - 1));
}
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
        string ans;
        cin >> s;
        n = n - 1;
        while (n >= 0)
        {
            if (s[n] != '0')
            {
                int a = s[n] - '0';
                ans += ('a' + a - 1);
                // ans = ans + fun(a);
                n--;
            }
            else
            {
                int a=0;
                a=s[n-2]-'0';
                a*=10;
                a+=s[n-1]-'0';

                ans += ('a' + a - 1);
                n-=3;
            }
        }
        reverse(ans.begin(), ans.end());

        cout<< ans << "\n";
    }
    return 0;
}