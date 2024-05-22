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
      int c=a^b;
      cout<<c<<endl;
    }
    return 0;
}