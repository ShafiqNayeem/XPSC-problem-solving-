#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> array_A(n), array_B(m);
        for (int i = 0; i < n; i++) cin >> array_A[i];
        for (int i = 0; i < m; i++) cin >> array_B[i];

        
        sort(array_A.begin(), array_A.end(), greater<ll>());
        sort(array_B.begin(), array_B.end(), greater<ll>());

        ll max_sum = 0;
        for (int i = 0; i < min(n, m); i++) {
            
            max_sum += min(array_A[i], array_B[i] * h);
        }

        cout << max_sum << endl;
    }

    return 0;
}
