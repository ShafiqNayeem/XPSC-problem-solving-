#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define in(v) for(int i=0; i<v.size(); i++) cin>>v[i];
// #define ins(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define out(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
#define vi vector<int>
#define vs vector<string>
#define cyes cout<<"YES"<<endl;
#define cno cout<<"NO"<<endl;
#define ll long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    vs a(n);
    // for (int i = 0; i < n; i++) cin >> a[i];
    in(a);

    map<char, ll> f_occ, s_occ;
    map<string, ll> occ;
    
    for (auto &str : a) {
        f_occ[str[0]]++;
        s_occ[str[1]]++;
        occ[str]++;
    }
    
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x = max(0LL, f_occ[a[i][0]] - occ[a[i]]);
        ans += x;
        x = max(0LL, s_occ[a[i][1]] - occ[a[i]]);
        ans += x;

        f_occ[a[i][0]]--;
        s_occ[a[i][1]]--;
        occ[a[i]]--;
    }
    
    cout << ans << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
