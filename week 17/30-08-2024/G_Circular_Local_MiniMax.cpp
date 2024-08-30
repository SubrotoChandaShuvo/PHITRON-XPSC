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
      ll n;
      cin >>n;
      vector<ll>v(n);
      for(ll i=0; i<n; i++)
      {
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      vector<ll>w(n);
      ll x=0,y=n/2;
      ll i=0,j=1;
      while(x<n/2 && y<n)
      {
        w[i]=v[x];
        w[j]=v[y];
        x++;
        y++;
        i+=2;
        j+=2;
      }
      if(n%2!=0)
      w[n-1]=v[n-1];
    bool flag=0;
      for(int i=1; i<n-1; i++)
      {
        if((w[i]>w[i+1] and w[i]>w[i-1]) or (w[i]<w[i+1] and w[i]<w[i-1]))
        {
            continue;
        }
        else
        {
            flag=1;
            break;
        }
      }
      if(flag)
      cout<<"NO"<<endl;
      else
      {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<w[i]<<" ";
        }
        cout<<endl;
      }
    }
    return 0;
}