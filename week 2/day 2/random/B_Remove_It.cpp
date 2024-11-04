#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    vector<int> seq;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        if (A[i] != x) {
            seq.push_back(A[i]);
        }
    }
    if (seq.empty()) {
        cout << endl;
    } else {
        for (size_t i = 0; i < seq.size(); i++) {
            cout << seq[i];
            if (i < seq.size() - 1) {
                cout << " ";
            }
        }
        cout << endl; 
    }
    return 0;
}