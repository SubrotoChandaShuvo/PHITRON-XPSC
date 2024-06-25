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
      int arr[n];
      map<int,int>mp,mpl;
      for(int i=0; i<n; i++)
      {
        cin>>arr[i];
        mp[arr[i]]++;
      }
      vector<int>v;
      for(auto i:mp)
      {
        int a=i.first;
        int b=i.second;
        if(a<=n)
        {
            for(int i=1; i<b; i++)
            v.push_back(a);
            mpl[a]=1;
        }
        else
        {
            for(int i=1; i<=b; i++)
            v.push_back(a);
        }
      }
      int c=1,res=0;
      for(int i=0; i<v.size(); i++)
      {
        for(int j=c; j<=n; j++)
        {
            if(mpl[j]==1)
            c++;
            else
            break;
        }
        int x=(v[i]-1)/2;
        if(c<=x)
        {
            c++;
            res++;
        }
        else
        {
            res=-1;
            break;
        }
      }
      cout<<res<<endl;
    }
    return 0;
}