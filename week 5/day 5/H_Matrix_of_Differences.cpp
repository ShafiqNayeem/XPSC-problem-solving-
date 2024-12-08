#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int smallest = 1;
        int largest = n * n;
        vector<vector<int>> ans(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { // Odd rows (0-based index), left to right
                for (int j = 0; j < n; j++) {
                    if ((smallest + largest) % 2 != 0) {
                        ans[i][j] = smallest++;
                    } else {
                        ans[i][j] = largest--;
                    }
                }
            } else { // Even rows (0-based index), right to left
                for (int j = n - 1; j >= 0; j--) {
                    if ((smallest + largest) % 2 != 0) {
                        ans[i][j] = smallest++;
                    } else {
                        ans[i][j] = largest--;
                    }
                }
            }
        }

        // Print the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
