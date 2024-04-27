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
        int a,b,c;
        cin>>a>>b>>c;
        int u=a-1;
        int v=abs(b-c)+(c-1);
        if(u<v)
        cout<<1<<endl;
        else if(u>v)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    }
    return 0;
}