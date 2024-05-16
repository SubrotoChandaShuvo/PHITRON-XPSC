#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    cin >> n >> k;
    set<long long> s;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
    vector<long long> v;
    v.assign(s.begin(), s.end());

    if (k > v.size())
        cout << -1;
    else
        cout << v[k - 1];
    return 0;
}