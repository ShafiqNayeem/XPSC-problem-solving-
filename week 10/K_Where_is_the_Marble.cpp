#include <bits/stdc++.h>
using namespace std;

void solve(int case_no, int n, int q) {
    vector<int> marbles(n);
    for (int i = 0; i < n; i++) {
        cin >> marbles[i];
    }

    // Sort the marbles for binary search
    sort(marbles.begin(), marbles.end());

    cout << "CASE# " << case_no << ":\n";

    while (q--) {
        int x;
        cin >> x;
        
        // Binary search for first occurrence of x
        auto it = lower_bound(marbles.begin(), marbles.end(), x);

        if (it != marbles.end() && *it == x) {
            cout << x << " found at " << (it - marbles.begin() + 1) << "\n";
        } else {
            cout << x << " not found\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int case_no = 1;
    while (true) {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0) break;
        solve(case_no++, n, q);
    }

    return 0;
}
