#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    set<int>s;
    int i=0,j=0,res=0;
    while (i<n and j<n)
    {
        while (j<n and !s.count(v[j]))
        {
            s.insert(v[j]);
            res=max(res, j-i+1);
            j++;
        }
        while (j<n and s.count(v[j]))
        {
            s.erase(v[i]);
            i++;
        }
        
    }
    cout<<res<<endl;
    
    return 0;
}