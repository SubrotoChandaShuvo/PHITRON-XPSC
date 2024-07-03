//Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll sum=0;
    int l=0,r=0,ans=INT_MAX;
    while (n>r || r>l)
    {
        sum+=v[r];
        while(sum>=s)
        {
            ans=min(ans,r-l+1);
            sum-=v[l];
            l++;
        }
        r++;      
    }
    cout<<ans;
    
    return 0;
}