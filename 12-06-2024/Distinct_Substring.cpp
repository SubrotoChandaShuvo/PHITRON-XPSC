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
      int cnt=((b*(b+1))/2)+(b-1);
      if(a>=cnt)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}