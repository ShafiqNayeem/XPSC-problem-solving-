#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    vector<int> chimps(N);
    for (int &h : chimps) cin >> h;
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int luchu;
        cin >> luchu;
        
        // Finding the tallest lady chimp shorter than Luchu
        auto shorter = lower_bound(begin(chimps), end(chimps), luchu);
        if (shorter != begin(chimps)) cout << *(shorter - 1) << " ";
        else cout << "X ";
        
        // Finding the shortest lady chimp taller than Luchu
        auto taller = upper_bound(begin(chimps), end(chimps), luchu);
        if (taller != end(chimps)) cout << *taller << "\n";
        else cout << "X\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    return 0;
}
