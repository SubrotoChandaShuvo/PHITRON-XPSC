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
        bool ans=false;
        int key;
        cin>>key;
        int l=0,r=n-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==key)
            {
                // cout<<a[mid]<<" ";
                ans=true;
                break;
            }
            else if(a[mid]>key)
            {
                r=mid-1;
            }
            else
            l=mid+1;
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}