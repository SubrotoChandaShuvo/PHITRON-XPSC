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
    multiset<int>ml;
    while(r<n)
    {
        ml.insert(v[r]);
        int mn,mx;
        mn=*ml.begin(), mx=*ml.rbegin();
        if((mx-mn)<=k)
        ans+=(r-l)+1;
        else
        {
            while(l<r)
            {
                mn=*ml.begin(),mx=*ml.rbegin();
                if((mx-mn)<=k)
                break;
                auto it=ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            mn=*ml.begin(), mx=*ml.rbegin();
            if((mx-mn)<=k)
            ans+=(r-l)+1;
        }
        r++;
    }
    cout<<ans;
    return 0;
}