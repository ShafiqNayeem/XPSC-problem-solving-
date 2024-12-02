#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
const int mod=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
   int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0, ans = -1;
    unordered_map<int, int> pMap;
    pMap[0] = -1;

    for (int i = 0; i < n; i++) {
        sum += a[i];

        if (pMap.find(sum - s) != pMap.end()) {
            int len = i - pMap[sum - s];
            ans = max(ans, len);
        }

        if (pMap.find(sum) == pMap.end()) {
            pMap[sum] = i;
        }
    }

    if (ans == -1) {
        cout << -1 << endl;
    } else {
        cout << n - ans << endl;
    }
}
return 0;
}