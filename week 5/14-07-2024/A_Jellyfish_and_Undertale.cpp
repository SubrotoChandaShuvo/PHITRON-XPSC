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
      int a,b,n;
      cin>>a>>b>>n;
      vector<int>v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      int sum=b;
      for(int i=0; i<n; i++)
      {
        sum+=min(a-1,v[i]);
      }
      cout<<sum<<endl;
    }
    return 0;
}