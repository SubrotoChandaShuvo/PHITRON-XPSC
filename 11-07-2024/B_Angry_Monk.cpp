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
      int k,n;
      cin>>k>>n;
      vector<int>v(n);
      for(int i=0; i<n; i++)
      {
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      int cnt=0;
      for(int i=0; i<n-1; i++)
      {
        cnt+=v[i];
        cnt+=v[i]-1;
      }
      cout<<cnt<<endl;
    }
    return 0;
}