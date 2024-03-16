#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    if(a>=b)
    {
        sum+=a;
        a--;
    }
    else
    {
        sum+=b;
        b--;
    }
    if(a>=b)
    {
        sum+=a;
        a--;
    }
    else
    {
        sum+=b;
        b--;
    }
    cout<<sum;
    return 0;
}