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
    ll t;
    cin>>t;
    while(t--){
        ll ans = 0;
        string s;
        cin>>s;
        ll n = (ll)s.size(); 
        ll a[2] = {0,0};
        for( ll i = 0 ; i < n ; i++) {
            a[s[i]-'0']++;
        }
        for(ll i = 0 ; i < n ; i++) {
            if(a[!(s[i]-'0')] > 0) {
                a[!(s[i]-'0')]--;
            }
            else {
                ans = n-i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;     
 }