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
      string s;
      cin>>s;
      int res=INT_MAX;
      for(int i='a'; i<='z'; i++)
      {
        int ans=0; 
        int l=0, r=n-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                if(s[l]==i)
                {
                    ans++;
                    l++;
                }
                else if(s[r]==i)
                {
                    ans++;
                    r--;
                }
                else
                {
                    ans=INT_MAX;
                    break;
                }
            }
            else
            {
                r--;
                l++;
            }
        }
            res=min(res,ans);
      }
      if(res==INT_MAX)
      cout<<-1<<endl;
      else
      cout<<res<<endl;
    }
    return 0;
}