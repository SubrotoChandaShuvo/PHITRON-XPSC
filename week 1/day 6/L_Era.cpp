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
        int n,curr=1,add=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x>curr)
            {
                add+=(x-curr);
                curr=x+1;
            }
            else
            curr++;
        }
        cout<<add<<endl;
    }
    return 0;
}