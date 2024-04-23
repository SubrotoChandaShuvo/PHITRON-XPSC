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
        set<int>s;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        if((n-s.size())%2==0)
        cout<<s.size()<<endl;
        else
        cout<<s.size()-1<<endl;
        // cout<<"size: "<<s.size()<<endl;
    }
    return 0;
}