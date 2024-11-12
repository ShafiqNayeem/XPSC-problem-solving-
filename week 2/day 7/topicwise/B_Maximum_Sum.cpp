#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        long long totalSum = 0;
        for (int x : a) {
            totalSum += x;
        }
        vector<long long> preMin(2 * k + 1, 0);
        for (int i = 1; i <= 2 * k; i++) {
            preMin[i] = preMin[i - 1] + a[i - 1];
        }
        vector<long long> SufMin(k + 1, 0);
        for (int i = 1; i <= k; i++) {
            SufMin[i] = SufMin[i - 1] + a[n - i];
        }
        long long maxSum = 0;
        for (int j = 0; j <= k; j++) {
            long long currentSum = totalSum - preMin[2 * j] - SufMin[k - j];
            maxSum = max(maxSum, currentSum);
        }

        cout << maxSum << endl;
    }

    return 0;
}
