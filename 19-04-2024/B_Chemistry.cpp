#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string st;
        cin>>st;
        map<char,int>mp;
        for(auto c:st)
        {
            mp[c]++;
        }
        for(auto c:mp)
        {
            if(k==0)
            break;
            if(c.second%2!=0)
            {
                mp[c.first]--;
                k--;
            }
        }
        int odd=0,evn=0;
        for(auto c:mp)
        {
            if(c.second==0)
            continue;
            if(c.second%2==0)
            evn++;
            else
            odd++;
        }
        if(odd==0 || odd==1)
        {
            if(evn==0 && odd==0)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}





/*
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        map<char, int> mp;
        int odd_cnt = 0;
        int even_cnt = 0;
        for (auto v : st)
        {
            mp[v]++;
        }
        for (auto a : mp)
        {
            if (k == 0)
                break;
            if (a.second % 2 != 0)
            {
                mp[a.first]--;
                k--;
            }
        }
        for (auto v : mp)
        {
            cout << v.first << " : " << v.second << endl;
            if (v.second <= 0)
                continue;

            if (v.second % 2 == 0)
                even_cnt++;
            else
                odd_cnt++;
        }
        if (odd_cnt == 0 || odd_cnt == 1)
        {
            if (even_cnt == 0 && odd_cnt == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
*/