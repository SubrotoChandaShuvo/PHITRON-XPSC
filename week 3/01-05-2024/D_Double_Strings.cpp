#include <bits/stdc++.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        string test = v[i];
        bool res=0;
        for(int j=0; j<test.size(); j++)
        {
        string f,s;
        f=test.substr(0,j);
        s=test.substr(j,test.size());
        if(mp[f]!=0 && mp[s]!=0)
        {
            res=1;
        }
        }
        cout<<res;
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        fun();
        cout << endl;
    }
    return 0;
}