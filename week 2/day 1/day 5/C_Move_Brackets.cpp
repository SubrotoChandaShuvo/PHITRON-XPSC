#include <bits/stdc++.h>
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
        int start=0,move=0;
        for(int i=0; i<n; i++)
        {
            char a;
            cin>>a;
            if(a=='(')
            start++;
            else if(a==')' && start!=0)
            start--;
            else
            move++;
        }
        cout<<(move+start)/2<<endl;
    }
    return 0;
}