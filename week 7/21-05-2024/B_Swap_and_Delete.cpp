#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                z++;
            else if (s[i] == '1')
                o++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
            if(z>0)
            z--;
            else
            break;
            else if(s[i]=='0')
            if(o>0)
            o--;
            else
            break;

        }
        cout<<o+z<<endl;
    }
    return 0;
}