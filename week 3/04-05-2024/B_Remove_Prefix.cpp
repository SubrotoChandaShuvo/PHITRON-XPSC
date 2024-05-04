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
        set<int>st;
        bool up=false;
        for(int i=n-1; i>=0; i--)
        {
            if(st.count(v[i]))
            {
                cout<<i+1<<endl;
                up=true;
                break;
            }
            else
            st.insert(v[i]);
        }
        if(!up)
        cout<<0<<endl;
    }
    return 0;
}