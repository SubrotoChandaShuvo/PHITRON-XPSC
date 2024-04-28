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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        bool ans=0;
        int a;
        for(int i=1; i<n-1; i++)
        {
            if(v[i] > v[i - 1] && v[i] > v[i + 1]) 
            {
                ans=1;
                a=i;
                break;
            }
        }
        // a+=1;
        if(ans)
        {
            cout<<"YES\n";
            cout<<a<<" "<<a+1<<" "<<a+2<<endl;
        }
        else
        cout<<"NO\n";
    }
    
    return 0;
}