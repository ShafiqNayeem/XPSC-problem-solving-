#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_set<string> seen;
    string name;
    
    for (int i = 0; i < n; ++i) {
        cin >> name;
        
        if (seen.find(name) != seen.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            seen.insert(name);  // Mark the name as seen
        }
    }
    
    return 0;
}
