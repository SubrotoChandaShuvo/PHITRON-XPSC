#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b && a==b+1)
        cout<<"YES\n";
        else if(a<b && a+2>=b)
        cout<<"YES\n";
        else if(a==b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
	// your code goes here

}
