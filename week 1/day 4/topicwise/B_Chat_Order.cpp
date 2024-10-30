#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, bool> seen; 
    deque<string> chrOdr;
    for (int i = 0; i < n; ++i) {
        string frndName;
        cin >> frndName;
        if (!seen[frndName]) {
            seen[frndName] = true;
            chrOdr.push_front(frndName);
        } else {
            for (auto it = chrOdr.begin(); it != chrOdr.end(); ++it) {
                if (*it == frndName) {
                    chrOdr.erase(it);
                    break;
                }
            }
            chrOdr.push_front(frndName);
        }
    }
    for (const auto &name : chrOdr) {
        cout << name << endl;
    }
    return 0;
}
