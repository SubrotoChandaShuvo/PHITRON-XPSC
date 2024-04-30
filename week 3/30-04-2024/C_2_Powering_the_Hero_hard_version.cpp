#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll sum=0;
        priority_queue<ll>pq;

        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                if(pq.empty())
                continue;
                sum+=pq.top();
                pq.pop();
            }
            else
            pq.push(v[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}