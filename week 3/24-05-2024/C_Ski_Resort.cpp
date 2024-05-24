#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n,k,q;
      cin>>n>>k>>q;
      vector<ll>a(n);
      for(int i=0; i<n; i++)
      cin>>a[i];
      ll ans=0;
      ll co=0;
      for(int i=0; i<n; i++)
      {
        if(a[i]<=q)
        co++;
        if(i==n-1 || a[i+1]>q)
        {
            if(co>=k)
            {
                ll xx=co-k+1;
                ll add=(xx*(xx+1))/2;
                ans+=add;
            }
            co=0;
        }
      }
    cout<<ans<<endl;
    }
    return 0;
}