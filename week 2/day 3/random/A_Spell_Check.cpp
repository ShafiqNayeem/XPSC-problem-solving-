#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string trgt = "Timur";
    sort(trgt.begin(), trgt.end());
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5) {
            cout << "NO" << endl;
        } else {
            string seq = s;
            sort(seq.begin(), seq.end());
            if (seq == trgt) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
