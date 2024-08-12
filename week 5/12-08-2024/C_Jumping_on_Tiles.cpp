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
      string s;           cin>>s;
        int n;              n=s.size();
 
        vector<pair<char,int>> or;
 
        char mn=min(s[0],s[n-1]);
        char mx=max(s[0],s[n-1]);
 
        for(int i=0;i<n;i++){
            if((s[i]>=mn and s[i]<=mx)){
                or.push_back({s[i],i});
            }
        }
 
        sort(or.begin(),or.end(),[&](pair<char,int>a,pair<char,int>b){
            return a.second<b.second;
        });
 
 
 
        if(or.size()>2){
            sort(or.begin()+1,or.begin()+or.size()-1,[&](pair<char,int>a,pair<char,int>b){
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first;
            });
        }
 
 
 
        vector<int> sq;
 
 
        ll moves=0;
 
        sq.push_back(1);
 
        for(int i=1;i<or.size();i++){
            moves+=abs(or[i-1].first-or[i].first);
            sq.push_back(or[i].second+1);
        }
 
 
        cout<<moves<<" "<<sq.size()<<endl;
 
        for(auto i:sq){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}