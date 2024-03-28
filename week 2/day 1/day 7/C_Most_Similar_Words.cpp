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
        int n,q;
        cin>>n>>q;
        vector<string> arr;
        for(int i=0; i<n; i++)
        cin>>arr[i];
        int mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int v=0; 
                string a=arr[i],b=arr[j];
                for(int k=0; k<a.size(); k++)
                {
                    v+=abs(a[k]-b[k]);
                }
                mn=min(mn,v);
            }
        }
        cout<<mn<<endl;

    }
    return 0;
}