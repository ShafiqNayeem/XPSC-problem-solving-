#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long
#define vi vector<ll>

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi b(n - 1), a(n);

        for (int i = 0; i < n - 1; i++) cin >> b[i];

        // Construct array `a`
        a[0] = b[0]; // Initialize first element
        for (int i = 1; i < n - 1; i++) {
            a[i] = b[i - 1] | b[i]; // Take OR of two consecutive values
        }
        a[n - 1] = b[n - 2]; // Last element

        // Validate the solution
        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if ((a[i] & a[i + 1]) != b[i]) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
