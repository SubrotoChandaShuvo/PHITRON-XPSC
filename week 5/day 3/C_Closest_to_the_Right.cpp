#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    while(q--)
    {
        int ans=n;
        int key;
        cin>>key;
        int l=0,r=n-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]>=key)
            {
                // cout<<a[mid]<<" ";
                ans=mid;
                r=mid-1;
            }
            else if(a[mid]<key)
            {
                l=mid+1;
            }
            // else
            // r=mid-1;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}