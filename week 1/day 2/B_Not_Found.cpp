#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool a[26];
    memset(a,true,sizeof(a));
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        a[s[i]-97]=false;
    }
    bool flag=true;
    for(int i=0; i<26; i++)
    {
        if(a[i])
        {
            cout<<char(97+i);
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"None";

    return 0;
}