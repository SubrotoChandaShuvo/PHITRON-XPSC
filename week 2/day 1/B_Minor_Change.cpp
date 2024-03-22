#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    int ans=0;
    cin>>a;
    cin>>b;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!=b[i])
        ans++;
    }
    cout<<ans;
    return 0;
}