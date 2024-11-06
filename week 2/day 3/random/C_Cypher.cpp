#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> finalDigits(n);
        for (int i = 0; i < n; ++i) {
            cin >> finalDigits[i];
        }
        vector<int> presentDigit(n);        
        for (int i = 0; i < n; ++i) {
            int cntMove;
            string moves;
            cin >> cntMove >> moves;
            int digit = finalDigits[i];
            for (char move : moves) {
                if (move == 'U') {
                    digit = (digit - 1 + 10) % 10;
                } else if (move == 'D') {
                    digit = (digit + 1) % 10;
                }
            }
            presentDigit[i] = digit;
        }
        for (int i = 0; i < n; ++i) {
            cout << presentDigit[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
