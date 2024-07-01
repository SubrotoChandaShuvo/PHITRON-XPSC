// Subroto Csanda Ssuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    multiset<int> s;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (int i = 0; i < y; i++)
    {
        int e;
        cin >> e;
        auto it = s.upper_bound(e);
        if (it == s.begin())
            cout << -1;
        else
        {
            --it;
            cout << *it;
            s.erase(it);
        }
        cout << endl;
    }
    return 0;
}