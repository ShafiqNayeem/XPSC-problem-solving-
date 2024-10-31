#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boxes(n);
    
    
    for (int i = 0; i < n; ++i) {
        cin >> boxes[i];
    }

    
    unordered_map<int, int> frq;
    for (int size : boxes) {
        frq[size]++;
    }

    
    int maxfrq = 0;
    for (const auto& entry : frq) {
        maxfrq = max(maxfrq, entry.second);
    }

    
    cout << maxfrq << endl;
    
    return 0;
}
