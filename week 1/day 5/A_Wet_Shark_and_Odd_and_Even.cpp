#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long arr[n];
    long long sume=0,sumo=0,cnt=0,mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        sume+=arr[i];
        else
        {
        cnt++;
        sumo+=arr[i];
        mn=min(mn,arr[i]);
        }
    }
    if(cnt%2==0)
    cout<<sume+sumo;
    else
    cout<<sume+(sumo-mn);

    return 0;
}