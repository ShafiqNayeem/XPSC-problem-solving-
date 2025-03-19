#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> sticks(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
        freq[sticks[i]]++;
    }

    int polygons = 0;
    
   
    for (auto &[length, count] : freq) {
        polygons+=count/3;
        
    }

    cout << polygons << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
