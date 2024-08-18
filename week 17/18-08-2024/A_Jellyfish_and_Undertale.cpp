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
      int s,in,to;
      cin>>s>>in>>to;
      vector<int>v(to);
      for(int i=0; i<to; i++)
      {
        cin>>v[i];
      }
      ll sum=in;
    //   ll sum=in-1;

      for(int i=0; i<to; i++)
      {
        sum+=min(s-1,v[i]);
        // if(v[i]>s)
        // {
        //     sum+=s;
        // }
        // else
        // sum+=v[i];
      }
      cout<<sum<<endl;

    }
    return 0;
}