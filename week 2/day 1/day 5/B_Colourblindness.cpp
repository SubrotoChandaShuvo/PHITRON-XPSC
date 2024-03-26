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
        char a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]=='G')
            a[i]='B';
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]=='G')
            b[i]='B';
        }
        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                flag=false;
                break;
            }
        }
        // for(int i=0; i<n; i++)
        // {
        //     cout<<a[i];
        // }
        // cout<<endl;
        // for(int i=0; i<n; i++)
        // {
        //     cout<<b[i];
        // }
        // cout<<endl;
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}