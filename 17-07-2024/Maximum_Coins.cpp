// Subroto Chanda Shuvo
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
        int n, a;
        cin >> n >> a;
        vector<int> v;
        int j = 1;
        // v.push_back(1);
        int i = 0;
        while (i < n)
        {
            j = j * 2;
            v.push_back(j);
            i++;
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        for (int c = 0; c < n; c++)
        {
            if (c < a)
                sum += v[c];
            else
                sum -= v[c];
        }
        cout << sum << endl;
        // for(int f:v)cout<<f<<" ";
        // cout<<endl;
    }
    return 0;
}