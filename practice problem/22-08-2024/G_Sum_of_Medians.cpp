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
      ll n,k;
      cin>>n>>k;
      vector<ll>v(n*k);
      for(int i=0; i<n*k; i++)
      {
        cin>>v[i];
      }
      sort(v.begin(),v.end());
      ll sum=0; 
      ll a=n*k,b=n/2,i=a-b-1,j=0;
      while(i>=0 && j<k) 
      {
        sum+=v[i];
        j++;
        i-=b+1;
      }
      cout<<sum<<endl;
    }
    return 0;
}