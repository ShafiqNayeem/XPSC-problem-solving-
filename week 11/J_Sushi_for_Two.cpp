#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<int> segments;
    int count = 1;

    // Count consecutive segments
    for (int i = 1; i < n; i++) {
        if (t[i] == t[i - 1]) {
            count++;
        } else {
            segments.push_back(count);
            count = 1;
        }
    }
    segments.push_back(count);  // Push the last counted segment

    int maxLength = 0;

    // Find max valid segment length
    for (int i = 0; i < (int)segments.size() - 1; i++) {
        maxLength = max(maxLength, 2 * min(segments[i], segments[i + 1]));
    }

    cout << maxLength << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
