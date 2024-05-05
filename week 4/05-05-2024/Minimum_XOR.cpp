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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        int k=v[0];
        for(int i=1; i<n; i++)
        {
            k^=v[i];
        }
        int mn=k;
        for(int i=0; i<n; i++)
        {
            int a = (k^v[i]);
            mn=min(mn,a);
        }
        cout<<mn<<endl;
    }
    return 0;
}