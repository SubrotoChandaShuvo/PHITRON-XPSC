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
      ll sum=0;
      int n,cnt=0,up=INT_MAX;
      cin>>n;

      vector<int>v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
        sum+=abs(v[i]);
        if(v[i]<0)
        cnt++;
        up=min(up,abs(v[i]));
      }
    //   sort(v.begin(),v.end());
      if(cnt%2!=0)
      sum-=2*up;
    //   sum-=(abs(v[0])*2);
      cout<<sum<<endl;
    }
    return 0;
}