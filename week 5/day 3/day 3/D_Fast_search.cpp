#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    // for(auto s:a)
    // cout<<"sss: "<<s<<" ";
    int q;
    cin>>q;
    while(q--)
    {
        int c,d;
        cin>>c>>d;
        auto lb=lower_bound(a.begin(),a.end(),c);
        auto ub=upper_bound(a.begin(),a.end(),d);
        cout<<ub-lb<<" ";
        // <<" "<<*lb<<" "<<*ub<<" :" <<lb-a.begin()<<" "<<ub-a.begin()<< endl;
    }
    return 0;
}