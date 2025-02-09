#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        int ans=ceil((double)y/2);
        int b=(ans*15)-(4*y);
        int m=min(x,b);
        x-=m;
        int c=0;
        c=ceil((double)x/15);
        cout<<ans+c<<endl;
    }


    return 0;
}