#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
    ll cnt=0,ans=a,i=1;
    while(ans<=b)
    {
        cnt++;
        ans=a*(pow(2,i));
        i++;
    }
    cout<<cnt;
    return 0;
}