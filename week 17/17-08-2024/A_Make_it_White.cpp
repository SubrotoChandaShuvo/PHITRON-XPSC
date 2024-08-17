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
      int n;
      cin>>n;
      string s;
      cin>>s;
      bool flag=0;
      int sum=0,cnt=0;
      for(int i=0; i<n; i++)
      {
        if(flag && s[i]=='B')
        {
            sum+=cnt;
            cnt=0;
        }
        if(!flag && s[i]=='B')
        {
            cnt=0;
            flag=1;
            sum++;
        }
        
        cnt++;
      }
      cout<<sum<<endl;
    }
    return 0;
}