#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i=0; i<=m; i++)
    cin>>a[i];

    vector<vector<int>>all_m;
    for(int i=0; i<=m; i++)
    {
        vector<int>v;
        for(int j=0; j<n; j++)
        {
            if((a[i]>>j)&1)
            v.push_back(i);
            else
            v.push_back(0);
        }
        all_m.push_back(v);
    }
    int res=0;
    vector<int >fa=all_m[m];
    for(int i=0; i<all_m.size()-1; i++)
    {
        vector<int>v=all_m[i];
        int cnt=0; 
        for(int j=0; j<n; j++)
        {
            if(fa[j]!=v[j])
            cnt++;

        }
        if(cnt<=k)
        res++;
    }
    cout<<res<<endl;
    return 0;
}