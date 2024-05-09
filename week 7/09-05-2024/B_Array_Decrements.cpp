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
        vector<int> a(n),b(n),v;
        for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=0; i<n; i++)
        cin>>b[i];
        bool ans=true;
        int dif,difz=INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            if(a[i]<b[i] )
            {
                ans=false;
                break;
            }

            if(b[i]==0)
            difz=max(difz,a[i]);
            else
            {
                
                dif=a[i]-b[i];
                if(i>0)
                {
                    int pre=v.back();
                    v.push_back(dif);
                    if(pre!=v.back())
                    {
                        ans=false;
                        break;
                    }
                }
                else
                v.push_back(dif);

            }

        }
        if(ans and v.back()>difz)     cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}