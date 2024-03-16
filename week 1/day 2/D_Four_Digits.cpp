#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,n;
    cin>>a;
    n=a;
    int cnt=0;
    while(a!=0)
    {
        a/=10;
        cnt++;
    }
    char c[4];
    for(int i=0; i<4-cnt; i++)
    {
        c[i]='0';
    }
    // cout<<cnt<<endl;
    for(int i=3; i>=4-cnt; i--)
    {
        c[i]=(n%10)+48;
        n/=10;
        // cout<<n<<endl;
    }
    cout<<c;
    return 0;
}