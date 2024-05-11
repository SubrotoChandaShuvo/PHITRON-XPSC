#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    set<string> res;
    while (!st.empty())
    {
        if (res.find(st.top()) == res.end())
        {
            res.insert(st.top());
            string p = st.top();
            if (p.size() > 2)
                cout << p.substr(p.size() - 2);
        }
        st.pop();
    }

    return 0;
}