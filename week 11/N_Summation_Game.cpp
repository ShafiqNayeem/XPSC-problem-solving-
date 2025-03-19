#include <bits/stdc++.h>
#define ll long long int
#define fl(i, start, end) for (int i = start; i < end; i++)
#define flr(i, start, end) for (int i = start; i > end; i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define in(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
#define out(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
#define vi vector<int>
#define vll vector<ll>
#define vc(type) vector<type>
#define cyes cout << "yes" << endl;
#define cno cout << "no" << endl;
#define br endl
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    vll a(n);
    in(a);

    sort(all(a));

    vll pref(n, 0);
    pref[0] = a[0];
    fl(i, 1, n) {
        pref[i] = pref[i - 1] + a[i];
    }

    ll ans = LLONG_MIN;
    fl(remove, 0, k + 1) {
        if (remove == n) {
            ans = max(ans, 0LL);
            break;
        }
        ll afterRemoval = pref[n - 1 - remove];

        int canNegify = min(n - remove, x);
        int lastRemainingIndex = n - 1 - remove;
        int negifiedTill = max(0, lastRemainingIndex - canNegify + 1);

        ll gain;
        ll negifiedWindowSum;
        if (negifiedTill == 0) {
            negifiedWindowSum = pref[lastRemainingIndex];
            gain = -negifiedWindowSum;
        } else {
            negifiedWindowSum = pref[lastRemainingIndex] - pref[negifiedTill - 1];
            gain = pref[negifiedTill - 1] - negifiedWindowSum;
        }

        ans = max(ans, gain);
    }

    cout << ans << br;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
