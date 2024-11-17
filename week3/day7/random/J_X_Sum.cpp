#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        ll ans = 0;

        // Loop through each cell to compute diagonal sums
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                ll sum = a[i][j];

                // Top-left to bottom-right diagonal
                for (ll x = i - 1, y = j - 1; x >= 0 && y >= 0; x--, y--) {
                    sum += a[x][y];
                }
                for (ll x = i + 1, y = j + 1; x < n && y < m; x++, y++) {
                    sum += a[x][y];
                }

                // Top-right to bottom-left diagonal
                for (ll x = i - 1, y = j + 1; x >= 0 && y < m; x--, y++) {
                    sum += a[x][y];
                }
                for (ll x = i + 1, y = j - 1; x < n && y >= 0; x++, y--) {
                    sum += a[x][y];
                }

                // Update maximum sum
                ans = max(ans, sum);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
