#include <bits/stdc++.h>
#define ll long long int
#define fl(i, start, end) for (int i = start; i < end; i++)
#define vc(type) vector<type>
#define cyes cout << "YES" << endl;
#define cno cout << "NO" << endl;
#define br << endl
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vc(int) a(n);
    fl(i, 0, n) cin >> a[i];

    vc(int) suff(n, 0);
    suff[n - 1] = 1;
    
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + (a[i] == a[n - 1]);
    }

    if (a[0] == a[n - 1]) {
        if (suff[0] % k == 0 || suff[0] >= k) {
            cyes
            return;
        }
    }

    bool ok = false;
    int cnt = 0;
    
    fl(i, 0, n - 1) {
        cnt += (a[i] == a[0]);
        if (cnt % k == 0 && suff[i + 1] >= k) {
            ok = true;
            break;
        }
    }

    if (ok) cyes
    else cno
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
