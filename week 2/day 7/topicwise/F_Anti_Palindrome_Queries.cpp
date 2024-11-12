#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int>> cuntPre(4, vector<int>(n + 1, 0)); // a[i] in {1, 2, 3}
        for (int i = 0; i < n; i++) {
            for (int val = 1; val <= 3; val++) {
                cuntPre[val][i + 1] = cuntPre[val][i];
            }
            cuntPre[a[i]][i + 1]++;
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            int m = r - l + 1;
            if (m % 2 == 1) {
                cout << "No\n";
                continue;
            }

            int halfm = m / 2;
            bool ok = true;
            for (int val = 1; val <= 3; val++) {
                int count = cuntPre[val][r + 1] - cuntPre[val][l];
                if (count > halfm) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
