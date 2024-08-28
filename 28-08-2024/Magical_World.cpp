#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
    //   int a,b,c;
    //   cin>>a>>b>>c;
    //   int x=a*b;
    //   int y=c*c;
    int x,y,z;
    cin>>x>>y>>z;
    if((x*y)<=(z*z))
    cout<<0;
    else{
        if(x<=(z*z)||y<=(z*z))
        cout<<1;
        else
        cout<<2;
    }
    cout<<endl;
    //   if(y>=x)
    //   cout<<0<<endl;
    //   else
    //   {
    //     if((a*1)<=y or (b*1)<=y)
    //     cout<<1<<endl;
    //     else
    //     cout<<2<<endl;

    //   }
    }
    return 0;
}