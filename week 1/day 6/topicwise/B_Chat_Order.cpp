#include <bits/stdc++.h>
using namespace std;
void process(const vector<string>& texts, int index, unordered_set<string>& seen, vector<string>& chtOdr) {
   
    if (index < 0) {
        return;
    }

    string frndCrnt = texts[index];
    if (seen.find(frndCrnt) == seen.end()) {
        seen.insert(frndCrnt);     // Mark as seen
        chtOdr.push_back(frndCrnt);  // Add to chat order
    }
    process(texts, index - 1, seen, chtOdr);
    
}

int main() {
    int n;
    cin >> n;
    vector<string> texts(n);

    for (int i = 0; i < n; ++i) {
        cin >> texts[i];
    }

    unordered_set<string> seen;
    vector<string> chtOdr;

    process(texts, n - 1, seen, chtOdr);

    reverse(chtOdr.begin(), chtOdr.end());

    for (int i = chtOdr.size() - 1; i >= 0; --i) {
        cout << chtOdr[i] << endl;
    }

    return 0;
}
