#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int ara[a],arb[b];
    for(int i=0; i<a; i++) cin>>ara[i];
    for(int i=0; i<b; i++) cin>>arb[i];
    int arc[a+b];
    int l=0,r=0,k=0;
    while(l<a || r<b)
    {
        if(r==b || l<a && ara[l]<=arb[r])
        {
            arc[k]=ara[l];
            l++;
            k++;
        }
        else
        {
            arc[k]=arb[r];
            r++;
            k++;
        }
    }
    for(int i=0; i<a+b; i++)
    cout<<arc[i]<<" ";
    return 0;
}