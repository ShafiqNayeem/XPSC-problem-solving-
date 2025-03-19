#include <bits/stdc++.h>
#define ll long long int
#define fl(i, start, end) for (int i = start; i < end; i++)
#define all(v) v.begin(), v.end()
#define in(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    in(a);

    sort(all(a));
    vector<int> v;

    // Collect elements that are not divisible by the smallest element
    fl(i, 0, n) {
        if (a[i] % a[0] != 0)
            v.push_back(a[i]);
    }

    if (v.empty()) {  // If all elements are multiples of the smallest one
        cout << "Yes\n";
        return;
    }

    // Check if all elements in v are divisible by v[0]
    bool ok = true;
    fl(i, 1, v.size()) {
        if (v[i] % v[0] != 0) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "Yes" : "No") << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
