#include <bits/stdc++.h>
using namespace std;

string deStr(const string& b) {
    bool seen[26] = {false}; 
    string r; 
    
    
    for (char ch : b) {
        if (!seen[ch - 'a']) {
            seen[ch - 'a'] = true;
            r += ch; 
        }
    }
    
   
    sort(r.begin(), r.end());
    
   
    char letters[26]; 
    int len = r.size();
    for (int i = 0; i < len; ++i) {
        letters[r[i] - 'a'] = r[len - i - 1];
    }
    
    
    string decoded;
    for (char ch : b) {
        decoded += letters[ch - 'a']; 
    }
    
    return decoded; 
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        string b;
        cin >> b; 
        
        cout << deStr(b) << endl; 
    }
    
    return 0; 
}
