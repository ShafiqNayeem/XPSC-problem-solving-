#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
 int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        if(n>=m){
            int diff=n-m;
            if(diff%2==0){ cyes;}
            else{ cno;}
        }
        else cno;
        }



    return 0;
}