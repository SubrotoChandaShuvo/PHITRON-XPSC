#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>v(n+1,0);
        for(int i=1; i<=n; i++)
        cin>>v[i];

        vector<ll>pref(n+1,0);
        for(int i=1; i<=n; i++)
        {
            pref[i]=pref[i-1]+v[i];
        }
        while(q--)
        {
            ll r,l;
            cin>>l>>r;
            ll k;
            cin>>k;
            ll sum=pref[n];
            sum-=(pref[r]-pref[l-1]);
            sum+=((r-l+1)*k);

            if(sum%2==1)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}