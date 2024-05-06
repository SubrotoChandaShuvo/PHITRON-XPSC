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
        string s="";
        for(int i=0; i<n; i++)
        {
            char a;
            cin>>a;
            a=tolower(a);
            if(s.empty() or s.back()!=a)
            s.push_back(a);
        }
        // cout<<s<<endl;
        if(s=="meow")
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}