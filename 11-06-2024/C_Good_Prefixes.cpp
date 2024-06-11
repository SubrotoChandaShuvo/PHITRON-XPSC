#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), m(n);
        vector<ll> s(n);
        int mx = INT_MIN;
        ll sum = 0;
        for(int i=0; i<n; i++)
        cin>>v[i];
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, v[i]);
            m[i] = mx;
            sum += v[i];
            s[i] = sum;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && v[i] == 0)
            {
                
                cnt++;
            }
            else
            {
                ll a = s[i];
                int mm=m[i];
                if((a-mm)==mm)
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}