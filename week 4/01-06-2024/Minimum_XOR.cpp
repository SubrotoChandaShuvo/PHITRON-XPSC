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
      int x=0;
      int a[n];
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
        x=x^a[i];
      }
      int ans=x;
      for(int i=0; i<n; i++)
      {
        ans=min(ans,(x^a[i]));
      }
      cout<<ans<<endl;
    }
    return 0;
}