#include <bits/stdc++.h>
#define ll long long
using namespace std;

int condition(int n, ll s, vector<ll>& a) {
    int pointL = 0;
    ll sumCurrent = 0;
    int lenMin = INT_MAX;

    for (int pointR = 0; pointR < n; ++pointR) {
        sumCurrent += a[pointR];

        while (sumCurrent >= s) {
            lenMin = min(lenMin, pointR - pointL + 1);
            sumCurrent -= a[pointL];
            pointL++;
        }
    }

    return lenMin == INT_MAX ? -1 : lenMin;
}

int main() {
    int n;
    ll s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << condition(n, s, a) << endl;
    return 0;
}
