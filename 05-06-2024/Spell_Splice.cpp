#include <bits/stdc++.h>
#define ll long long
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
        int a[n],v[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>v[i];
        }
        int m=0;
        for(int i=0;i<n-1;i++)
        {
            for(int k=i+1;k<n;k++)
            {
                int s=a[i]*v[k]+v[i]*a[k];
                m=max(m,s);
            }
        }
        cout<<m<<endl;
     }
     return 0;
}