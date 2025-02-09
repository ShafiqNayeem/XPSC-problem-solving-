#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
#define vi vector<int>

void solve() {
    int x;
    cin >> x;
    vi a;

    // Step 1: Convert `x` to binary representation and store in `a`
    while (x) {
        a.push_back(x % 2);  // Store last bit
        x /= 2;              // Move to next bit
    }

    // Step 2: Process to avoid consecutive nonzero values
    a.push_back(0); // Ensure we have space for carry operations

    for (int i = 0; i < (int)a.size() - 1; i++) {
        if (a[i] == 1 && a[i + 1] == 1) {  // If we find consecutive 1s
            a[i] = -1;  // Change first `1` to `-1`
            int j = i + 1;

            // Carry handling
            while (j < (int)a.size() && a[j] == 1) {
                a[j] = 0; // Convert `1`s to `0`s
                j++;
            }

            if (j < (int)a.size()) {
                a[j] = 1; // Set first `0` we find to `1`
            } else {
                a.push_back(1); // If we reach the end, add `1`
            }
        }
    }

    // Step 3: Output the final result
    cout << a.size() << endl;
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
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
