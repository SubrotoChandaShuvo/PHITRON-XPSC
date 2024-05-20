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
      ll a=1;
      while(a<=n)
      {
        a*=2;
      }
      a/=2;
      a--;
      cout<<a<<endl;
    }
    return 0;
}