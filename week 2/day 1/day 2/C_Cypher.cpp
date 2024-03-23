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
        int  arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            for(int j=0; j<a; j++)
            {
                char c;
                cin>>c;
                if(c=='U')
                arr[i]-=1;
                if(c=='D')
                arr[i]+=1;
                if(arr[i]>9)
                arr[i]=0;
                if(arr[i]<0)
                arr[i]=9;
            }
        }
        for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}