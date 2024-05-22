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
      ll n;
      cin>>n;
      ll r=0;
      for(int i=0; i<n; i++)
      {
        int x;
        cin>>x;
        r|=x;
      }
      cout<<r<<endl;

    }
    return 0;
}