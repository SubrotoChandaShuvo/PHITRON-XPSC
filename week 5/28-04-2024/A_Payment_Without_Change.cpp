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
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long c=s%n;
        if(b>=c && (a*n)+b>=s)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}