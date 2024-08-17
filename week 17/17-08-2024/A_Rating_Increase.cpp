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
      string s,a,b;
      cin>>s;
      a+=s[0];
      bool f=0;
      for(int i=1; i<s.size(); i++)
      {
        if(s[i]>'0' || f)
        {
            b+=s[i];
            f=1;
        }
        else
        {
            a+=s[i];
        }
      }
      if(b.size()=='0')
      b='0';
      int x=stoi(a),y=stoi(b);
      if(x<y)
      cout<<x<<" "<<y<<endl;
      else
      cout<<-1<<endl;
    }
    return 0;
}