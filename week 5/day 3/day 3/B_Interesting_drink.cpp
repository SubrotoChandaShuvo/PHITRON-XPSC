#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--)
    {
        int c;
        cin>>c;
        int l=0,r=n-1,mid,ans=-1;

        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<=c)
            {
                ans=mid;
                l=mid+1;
            }
            else
            r=mid-1;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}