//Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l=0,r=0,ans=0;
    ll sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=k)
        {
            ans++;
            while(sum>=k)
            {
                sum-=v[l];
                l++;
                if(sum>=k)
                ans++;
            }
        }
        r++;
    }
    cout<<ans;
    return 0;
}