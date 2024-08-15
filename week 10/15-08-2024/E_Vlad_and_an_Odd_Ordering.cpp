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
        int n, w;           cin >> n >> w;
        for (int i = 1; i <= (log2(n) + 1); i++)
        {
            int a = pow(2, i);
            int b = (n + (a / 2)) / a;
            if (w <= b)
            {
                if (w == 1)
                {
                    cout << (a / 2) << endl;
                    break;
                }
                else
                {
                    int res = (a / 2) + ((w - 1) * a);
                    cout << res << endl;
                    break;
                }
            }
            else
            {
                w -= b;
            }
        }
    }
    return 0;
}