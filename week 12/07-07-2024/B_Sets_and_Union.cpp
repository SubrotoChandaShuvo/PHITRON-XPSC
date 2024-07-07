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
        int n;
        cin >> n;
        vector<int> a[n];
        vector<int> alln;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            a[i].resize(z);
            for (int j = 0; j < a[j].size(); j++)
            {
                cin >> a[i][j];
                alln.push_back(a[i][j]);
            }
        }
        sort(alln.begin(), alln.end());
        alln.erase(unique(alln.begin(), alln.end()));

        int ans = 0;
        for (int e = 1; e <= 50; e++)
        {
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                bool found = false;
                for (int j = 0; j < a[i].size(); j++)
                {
                    if (a[i][j] == e)
                    {
                        found = true;
                        break;
                    }
                    if (!found)
                    {
                        for (int j = 0; j < a[i].size(); j++)
                        {
                            temp.push_back(a[i][j]);
                        }
                    }
                }
                sort(temp.begin(), temp.end());
                temp.erase(unique(temp.begin(), temp.end()), temp.end());
                if (temp != alln)
                    ans = max(ans, (int)temp.size());
            }
        }
        return 0;
    }
    return 0;
}