#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        // Output the lexicographically smaller string
        if (s <= rev) {
            cout << s << endl;
        } else {
            cout << rev + s << endl;
        }
    }

    return 0;
}
