#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll countGoodSegments(int n, int k, vector<int>& a) {
    vector<int> freq(100001, 0); // Frequency array for elements in the range [1, 100000]
    int uniqueCount = 0;
    int left = 0;
    ll count = 0;

    for (int right = 0; right < n; ++right) {
        // Add the current element to the frequency array
        if (freq[a[right]] == 0) {
            uniqueCount++; // New unique element
        }
        freq[a[right]]++;

        // Shrink the window until uniqueCount <= k
        while (uniqueCount > k) {
            freq[a[left]]--;
            if (freq[a[left]] == 0) {
                uniqueCount--; // Element removed completely
            }
            left++;
        }

        // Count all valid subarrays ending at `right`
        count += (right - left + 1);
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << countGoodSegments(n, k, a) << endl;
    return 0;
}
