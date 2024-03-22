#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x!=k)
        v.push_back(x);
    }
    for(int a:v)
    cout<<a<<" ";
    return 0;
}