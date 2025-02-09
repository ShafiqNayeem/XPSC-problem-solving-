#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int player;
    cin >> player;

    int count = 0;

    for (int i = 0; i < m; i++) {
        int temp = player ^ arr[i]; // XOR operation
        int temp_count = __builtin_popcount(temp); // Count set bits (1s)

        if (temp_count <= k) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
