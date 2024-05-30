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
      bool flag=1;
      for(int i=0; i<n-1; i++)
      {
        int x=s[i],y=s[i+1];
        // cout<<x<<" "<<y<<endl;
        if(x<=y)
        continue;
        else 
        {
            flag =0;
            break;
        }
      }
      if(flag)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}