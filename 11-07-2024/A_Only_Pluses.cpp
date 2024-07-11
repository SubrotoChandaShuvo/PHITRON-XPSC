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
      int a,b,c;
      cin>>a>>b>>c;
      vector<int>v={a,b,c};
      sort(v.begin(),v.end());
      for(int i=0; i<5; i++)
      {
         if(v[0]+1<=v[1])
         v[0]++;
         else if(v[1]+1<=v[2])
         v[1]++;
         else
         v[2]++;
      }
      cout<<v[0]*v[1]*v[2]<<endl;

    }
    return 0;
}