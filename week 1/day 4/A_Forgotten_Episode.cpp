#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    sort(arr,arr+(n-1));
    for(int i=1; i<n; i++)
    {
        if(i!=arr[i-1])
        {
            ans=i;
            break;
        }
    }
    if(ans!=0)
    cout<<ans;
    else
    cout<<n;
    return 0;
}