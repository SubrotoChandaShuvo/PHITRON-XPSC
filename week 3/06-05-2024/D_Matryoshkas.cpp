#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        map<int,int>mp;
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]!=0)
            {
                int v=a[i];
                ans++;
                while(mp[v]>0)
                {
                    mp[v]--;
                    v++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}