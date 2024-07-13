//Subroto Chanda Shuvo
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    cout<<"YES"<<endl;
    for(int i=a; i<=b; i+=2)
    cout<<i<<" "<<i+1<<endl;
    return 0;
}