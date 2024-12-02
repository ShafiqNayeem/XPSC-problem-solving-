#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; 
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> v2(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> v2[i];

        vector<ll> sp(n+1, 0);
        for (int i = 1; i <= n; i++) {
            sp[i] = sp[i-1] + v[i-1];
        }

        vector<ll> eq(n, 1);
        for (int i = n-2; i >= 0; i--) {
            if (v2[i] % v2[i+1] == 0) {
                eq[i] = eq[i+1] + 1;
            }
        }

        int mxSum = 0;
        for (int i = 0; i < n; i++) {
            int l = i, r = i + eq[i] - 1, ans = 0;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (sp[mid+1] - sp[i] <= k) {
                    ans = mid - i + 1;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            mxSum = max(mxSum, ans);
        }

        cout << mxSum << endl;
    }
    return 0;
}
