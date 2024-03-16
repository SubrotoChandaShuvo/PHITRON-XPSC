#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=b/c;
    if(d*c>=a && d*c<=b)
    cout<<d*c;
    else
    cout<<-1;
    return 0;
}