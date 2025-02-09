#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<ll>
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
        ll n; cin>>n;
        vi a(n);
        in(a);
        ll mx=-1e9, sum=0,cunt=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            mx=max(mx,a[i]);
            if(sum-mx==mx) cunt++;
        }
        cout<<cunt<<endl;
        
    }



    return 0;
}