#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<pair<ll,int>>v(n);
    for(int i=0; i<n ; i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());

    for(int i=0; i<n; i++)
    {
        int y=x-v[i].first;
        for(int j=i+1,k=n-1; k>j; j++)
        {
            while (v[j].first + v[k].first>y)
            {
                k--;
            }
            if( v[j].first+v[k].first==y)
            {
                cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second<<endl;
                return 0;
            }
            
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}