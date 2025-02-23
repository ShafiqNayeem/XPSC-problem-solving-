#include <bits/stdc++.h>
#define ll long long int
#define fast  ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;
    multiset<int> towers;

    for (int i = 0; i < n; i++) {
        int cube;
        cin >> cube;
        
        auto it = towers.upper_bound(cube);
        if (it != towers.end()) towers.erase(it);
        
        towers.insert(cube);
    }

    cout << towers.size() << endl;
}

int main() {
   fast;
    
    solve();
    return 0;
}
