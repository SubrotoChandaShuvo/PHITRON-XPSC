
// Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        int a = 0, b = 0,c=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                a++;
            if (t[i] == '1')
                b++;
            if(s[i]!=t[i])
            c++;
        }
        // cout<<T<<" ";
        if (a != b)
            cout << "NO\n";
        else if (n == 1)
            cout << "YES\n";
        else if((s=="01"|| s=="10")&& k%2==0)
        cout<<"NO\n";
        else if ((c/2)<=k)
            cout << "YES\n";
    }
    return 0;
}