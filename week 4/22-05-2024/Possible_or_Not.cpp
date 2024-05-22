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
      int ans=-1;
      for(int i=0; i<a; i++)
      {
        int x;
        cin>>x;
        if((x&b)==b)
        ans&=x;
      }
      if(ans==b)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}