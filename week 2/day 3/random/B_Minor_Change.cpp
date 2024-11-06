#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int op = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != t[i]) {
            op++;
        }
    }
    cout << op << endl;
    return 0;
}
