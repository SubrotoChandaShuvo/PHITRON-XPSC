#include <bits/stdc++.h>
using namespace std;
void res()
{
            int n;
        bool ans = true;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < (n / 2); i++)
        {
            if (v[i] != v[n - i - 1])
            {
                s.insert(v[i]);
                s.insert(v[n - i - 1]);
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
        {
            for (auto e : s)
            {
                int l = 0, r = n - 1;
                ans = true;
                while (l < r)
                {
                    if (v[l] == v[r])
                        l++, r--;
                    else if (v[l] == e)
                        l++;
                    else if (v[r] == e)
                        r--;
                    else
                    {
                        ans = false;
                        break;
                    }
                }
                if (ans)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        res();
    }
    return 0;
}