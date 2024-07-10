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
        int x = 1;
        int i = 2;
        while (i < n)
        {
            x += i;
            i = i * 2;
        }
        x++;
        if (x == n)
            cout << 0 << endl;
        else
            cout << x - ((x - n) * 2) << endl;
    }
    return 0;
}