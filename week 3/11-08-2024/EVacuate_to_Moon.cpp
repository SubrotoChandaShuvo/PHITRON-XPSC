//Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,s,h;
      cin>>n>>s>>h;
      vector<ll>v(n);
      for(ll i=0; i<n; i++)
      cin>>v[i];
      sort(v.begin(),v.end(), greater<ll>());

      vector<ll>c(s);
      for(ll i=0; i<s; i++)
      cin>>c[i];
      sort(c.begin(),c.end(), greater<ll>());

        ll sum=0;
      for(ll i=0; i<min(s,n); i++)
      {
        ll x=h*c[i];
        sum+=min(x,v[i]);
      }
      cout<<sum<<endl;

    // for(ll x:v)
    // cout<<x<<" ";
    // cout<<endl;
    // for(ll x:c)
    // cout<<x<<" ";
    // cout<<endl;

    }
    return 0;
}