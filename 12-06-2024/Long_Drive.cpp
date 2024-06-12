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
      int a,b;
      cin>>a>>b;
      a*=10;
      cout<<ceil(((10.0*b)-a)/(100.0-b))<<endl;
    }
    return 0;
}