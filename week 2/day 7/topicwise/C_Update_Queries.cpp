#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        vector<int> indices(m);
        string c;
        cin >> c;
        
        // Store each character intended for each index in a map of vectors
        map<int, vector<char>> updates;
        for (int i = 0; i < m; i++) {
            indices[i]--; // Convert to zero-based index for easier string access
            updates[indices[i]].push_back(c[i]);
        }
        
        // Apply updates by choosing the smallest character for each index
        for (auto &[index, chars] : updates) {
            sort(chars.begin(), chars.end());
            s[index] = chars[0]; // Choose the lexicographically smallest character
        }
        
        cout << s << endl;
    }
    return 0;
}
