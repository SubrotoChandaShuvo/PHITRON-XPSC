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
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll op = 0, ne = 0, sum = 0;
        bool f = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        for(ll i=0; i<=n; i++)
        {
            if(f)
            if(v[i]>0 or i==n)
            {
                op++;
                f=0;
            }
          
                if(v[i]<0)
                f=1;
            
        }

            cout << sum << " " << op << endl;
    }
    return 0;
}