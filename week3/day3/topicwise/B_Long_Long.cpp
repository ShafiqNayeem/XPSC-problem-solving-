#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        ll maxSum = 0;
        int opCnt = 0;

        bool op = false;

        for (int i = 0; i < n; i++) {
            maxSum += abs(a[i]);
            
            if (a[i] < 0) {
                if (!op) {
                    opCnt++;
                    op = true;
                }
            } else if (a[i] > 0) {
                op = false;
            }
        }
        cout << maxSum << " " << opCnt << "\n";
    }

    return 0;
}
