#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define flr(i,n) for(int i=n-1;i>=0;i--) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll gcd(ll a, ll b) {
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

void solve() {
    ll ans = 1;
    ll n;
    cin >> n;
    vll a(n);
    in(a); // input the array a
    
    vll pre(n), suff(n);
    
    // Prefix sum array
    pre[0] = a[0];
    fl(i, n-1) pre[i+1] = pre[i] + a[i+1];
    
    // Suffix sum array
    suff[n-1] = a[n-1];
    flr(i, n-1) suff[i] = suff[i+1] + a[i];
    
    // Compute the GCDs
    fl(i, n-1) 
        ans = max(ans, gcd(max(pre[i], suff[i+1]), min(pre[i], suff[i+1])));
    
    cout << ans << "\n";
}

int main() {
    fast;
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}
