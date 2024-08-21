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
      int a,b;
      cin>>a>>b;
      int sum=0;
      while(a!=b)
      {
        if(a>b)
        {
            sum+=round(a/2.);
            // cout<<round(a/2)<<"a ";
            a=a-round(a/2.);
        }
        else if(b>a)
        {
            sum+=round(b/2.);
            // cout<<round(b/2.)<<"b ";
            b=b-round(b/2.);
        }
      }
      cout<<sum<<endl;
    }
    return 0;
}