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
        string a, b;
        cin >> a >> b;
        char m, n;
        m = a[a.size() - 1];   // a.back();
        n = b.back();          // b[b.size() - 1];
        if(m==n)
        {
            if(a.size()==b.size())  cout<<'=';
            else if(m=='S')
            {
                cout<<(a.size()<b.size() ? '>' : '<');
            }
            else
            cout<<(a.size()<b.size() ? '<' : '>');
        }
        else
        cout<<(m<n ? '>' : '<');
        cout<<endl;
    }
    return 0;
}