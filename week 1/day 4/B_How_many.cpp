#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s,t,cnt=0;
    cin>>s>>t;
    for(int i=0; i<=s; i++)
    {
        for(int j=0; j<=s; j++)
        {
            for(int k=0; k<=s; k++)
            {
                int x=i*j*k;
                int y=i+j+k;
                // cout<<i<<" "<<j<<" "<<k<<endl;
                if(y<=s && x<=t)
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}