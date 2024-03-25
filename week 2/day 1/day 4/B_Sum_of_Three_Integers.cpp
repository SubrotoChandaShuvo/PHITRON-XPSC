#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ans=0;
    vector<int>v;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            int x=k-(i+j);
            if(x>=0 && x<=n)
            v.push_back(x);
        }
    }

        // for(int j:v)
        // {
        //     cout<<j<<" ";
        // }
     cout<<v.size();
    return 0;
}