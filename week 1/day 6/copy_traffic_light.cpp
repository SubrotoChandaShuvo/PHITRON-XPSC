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
        char ch;
        string s;
        cin>>n>>ch;
        cin>>s;
        set<int>traffic;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='g')
            {
                traffic.insert(i+1);
            }
        }
        int ans=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(s[i]==ch)
            {
                auto LB = traffic.lower_bound(i+1);
                if(LB!=traffic.end())
                {
                    int diff = (*LB - (i + 1));
                    ans = max(ans, diff);
                }
                else
                {
                    int x=n-(i+1), y=*traffic.begin();
                    ans = max(ans, x+y);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}