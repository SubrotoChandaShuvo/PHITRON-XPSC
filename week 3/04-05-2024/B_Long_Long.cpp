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
        int n;
        cin >> n;
        int ans = 0;
        long long sum = 0;
        // int x = 0;
        bool an = 0;
        vector<int>a(n);
        for(int i = 0; i < n; i++)
        cin>>a[i];
        for(int i = 0; i <= n; i++)
        {
            if(an)
            {
                if(i==n || a[i]>0)
                {
                    ans++;
                    an=0;
                }
            }
            else
            {
                if(a[i]<0)
                an=1;
            }
            if(i<n)
            sum += abs(a[i]);
        }
        cout << sum << " " << ans << endl;
    }

    return 0;
}