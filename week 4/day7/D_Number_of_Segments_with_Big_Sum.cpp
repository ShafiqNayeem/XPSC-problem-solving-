#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll goodSegment(int n, ll s, vector<ll>& a) {
    int pointL = 0;
    ll sumCurrent = 0;
    ll count = 0;

    for (int pointR = 0; pointR < n; ++pointR) {
        sumCurrent += a[pointR];

        while (sumCurrent >= s) {
            count += (n - pointR);
            sumCurrent -= a[pointL];
            pointL++;
        }
    }

    return count;
}

int main() {
    int n;
    ll s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << goodSegment(n, s, a) << endl;
    return 0;
}
