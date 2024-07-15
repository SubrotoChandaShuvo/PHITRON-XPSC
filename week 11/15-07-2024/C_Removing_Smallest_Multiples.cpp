//Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string st;
      cin>>st;
      st="@"+st;
      vector<int>vis(n+1,0);
      for(int i=1; i<=n; i++)
      {
        if(st[i]=='1')
        vis[i]=2;

      }
      ll ans=0;
      for(int i=1; i<=n; i++)
      {
        for(int j=i; j<=n; j+=i)
        {
            if(vis[j]==0)
            {
                vis[j]=1;
                ans+=i;
            }
            else if(vis[j]==2)
            {
                break;
            }
        }
      }
      cout<<ans<<endl;
    //   for(int x:vis)
    //   cout<<x<<" ";
    //   cout<<endl;
    }
    return 0;
}