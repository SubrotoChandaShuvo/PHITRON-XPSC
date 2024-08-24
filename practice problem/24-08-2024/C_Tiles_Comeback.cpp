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
      int n,k;
      cin>>n>>k;
      vector<int>v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      vector<int>suf(n,0);
      suf[n-1]=1;
      for(int i=n-2; i>=0; i--)
      {
        suf[i]=suf[i+1]+(v[i]==v[n-1]);
      }
      if(v[0]==v[n-1])
      {
        if(suf[0]%k==0 or suf[0]>=k)
        {
            cout<<"YES"<<endl;
            continue;
        }
      }
      bool f=0;
      int cnt=0;
      for(int i=0; i<n-1; i++)
      {
        cnt+=(v[i]==v[0]);
        if(cnt%k==0 and suf[i+1]>=k)
        {
            f=1;
            break;
        }
      }
      if(f)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}