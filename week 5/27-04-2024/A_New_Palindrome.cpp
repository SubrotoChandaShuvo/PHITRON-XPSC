#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        bool ans=0;
        for(int i=0; i<(s.size()/2)-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                ans=1;
                break;
            }
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}