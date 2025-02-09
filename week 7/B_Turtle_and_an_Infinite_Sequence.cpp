#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long int

// Function to check if the i-th bit is set in x
bool isSet(ll x, int i) {
    return (x & (1LL << i)) != 0;
}

int main() {
    fast;
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, m;
        cin >> n >> m;
        
        ll l = max(0LL, n - m);
        ll r = n + m;
        ll ans = 0;
        ll val = 1;
        
        for (int i = 0; i < 62; i++) { // 62 bits are enough for long long (64-bit)
            if (r - l >= val)
                ans += val;
            else if (isSet(l, i))
                ans += val;
            else if (isSet(r, i))
                ans += val;
            
            val *= 2;
        }
        
        cout << ans << endl;
    }

    return 0;
}
