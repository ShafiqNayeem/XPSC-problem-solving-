#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt = 0;

        // Count 'W's in the first window of size k
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') cnt++;
        }

        int ans = cnt;

        // Slide the window across the string
        for (int i = k; i < n; i++) {
            if (s[i] == 'W') cnt++;          // Include the new character in the window
            if (s[i - k] == 'W') cnt--;      // Exclude the oldest character from the window
            ans = min(ans, cnt);             // Update the minimum count
        }

        cout << ans << endl;                 // Output the result for this test case
    }
    return 0;
}
