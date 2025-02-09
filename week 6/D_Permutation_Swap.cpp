#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    int t; cin>>t;
    
    while(t--) {
        ll n,b,ans=0;
        cin>>n;
        vll v;
        for(ll i = 1 ; i <= n ; i++) {
            cin>>b;
            if(abs(b-i)!=0) {
                ans = __gcd(ans,abs(b-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;     
 }        


