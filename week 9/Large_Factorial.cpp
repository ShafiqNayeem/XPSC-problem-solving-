#include <bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

const ll mod = 1e9 + 7;

ll factorial(ll n) {
    ll result = 1;
    for (ll i = 2; i <= n; i++) {
        result = (result * i) % mod;  
    }
    return result;
}

void solve() {
    ll n; 
    cin >> n;
    cout << factorial(n) << endl;
}

int main() {
    fast;
    // int t; 
    // cin >> t;
    // while (t--) 
        solve();
    return 0;
}
