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
        string a;
        cin>>a;
        if(n!=5)
        {
            cout<<"NO\n";
        }
        else
        {
            sort(a.begin(),a.end());
            if(a=="Timru")
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
}