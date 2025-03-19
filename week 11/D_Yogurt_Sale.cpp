#include <bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if (2 * a > b) {
        
        cout << (n / 2) * b + (n % 2) * a << endl;
    } else {
       
        cout << n * a << endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
