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
    int m,n;
    cin>>m>>n;
    int ar[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>ar[i][j];
        }
    }
    int ans=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int sum=0;
            int a=i,b=j;
            while(a>=0 && a<m && b>=0 && b<n)
            {
                sum+=ar[a][b];
                a--;
                b--;
            }
            a=i,b=j;
            while(a>=0 && a<m && b>=0 && b<n)
            {
                sum+=ar[a][b];
                a++;
                b--;
            }
            a=i,b=j;
            while(a>=0 && a<m && b>=0 && b<n)
            {
                sum+=ar[a][b];
                a--;
                b++;
            }
            a=i,b=j;
            while(a>=0 && a<m && b>=0 && b<n)
            {
                sum+=ar[a][b];
                a++;
                b++;
            }
            sum-=ar[i][j]*3;
			ans = max(ans, sum);
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}