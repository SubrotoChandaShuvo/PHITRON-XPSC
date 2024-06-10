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
      ll n;
      cin>>n;
      ll m=0,mn=INT_MAX,sum=0;
      vector<ll>v(n);
      for(ll i=0; i<n; i++)
      {
         cin>>v[i];
         if(v[i]<0)
         m++;
        mn=min(mn,abs(v[i]));
        sum+=abs(v[i]);
      }
      if(m%2!=0)
      sum-=2*mn;
      cout<<sum<<endl;
      
    }
    return 0;
}