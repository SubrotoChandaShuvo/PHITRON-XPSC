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
        long long sum=0,n;
        cin>>n;
        while(n>0)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}