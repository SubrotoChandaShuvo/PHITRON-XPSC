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
        string s;
        cin>>s;
        int ans=0,l=0,r=0;
        if(s[0]=='1')
        l++;
        if(s[1]=='1')
        l++;
        if(s[2]=='1')
        r++;
        if(s[3]=='1')
        r++;

        // cout<<l<<" "<<r<<endl;
        if(l>0 && r>0)
        ans=(l*10)*(r*10);

        {
            ans+=r*10;
            ans+=l*10;
        }

        ans++;
        cout<<ans<<endl;
    }
    return 0;
}