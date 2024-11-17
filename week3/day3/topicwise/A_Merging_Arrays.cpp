#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // Input sizes of the arrays
    vector<int> a(n), b(m);

    // Input the first sorted array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Input the second sorted array
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Two-pointer merge
    vector<int> merged;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    // Append remaining elements from the first array
    while (i < n) {
        merged.push_back(a[i]);
        i++;
    }

    // Append remaining elements from the second array
    while (j < m) {
        merged.push_back(b[j]);
        j++;
    }

    // Output the merged array
    for (int x : merged) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
