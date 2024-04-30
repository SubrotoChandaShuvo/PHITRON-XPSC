#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> d;
        ll total = 0;
        ll mc = 0;
        for (int i = 0; i < n; i++)
        {
            ll l = i;
            ll r = n - 1 - i;
            if (s[i] == 'L')
            {
                if (l < r)
                {
                    mc++;
                    total += r;
                    d.push_back(r - l);
                }
                else
                    total += l;
            }
            else
            {
                if (l > r)
                {
                    mc++;
                    total += l;
                    d.push_back(l-r);
                }
                else
                    total += r;
            }
        }

        vector<ll>v(n+1);
        for(int i=mc-1; i<=n; i++)
        {
            v[i]=total;
        }

        sort(d.begin(),d.end(),greater<ll>() );

        for(int i=mc-1; i>=1; i--)
        {
            total-=d.back();
            d.pop_back();
            v[i]=total;
        }

        for(int i=1; i<=n; i++)
        cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}