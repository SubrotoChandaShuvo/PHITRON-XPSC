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
        int c=0;
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            z++;
            else
            o++;
        }
        int mn=min(z,o);
        if(mn%2==0)
        cout<<"Ramos\n";
        else
        cout<<"Zlatan\n";
        // cout<<"   "<<c<<endl;
    }
    return 0;
}