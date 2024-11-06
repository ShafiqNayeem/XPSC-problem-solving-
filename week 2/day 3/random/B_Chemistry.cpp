#include <bits/stdc++.h>
using namespace std;

bool check2(int freq[]) {
    int odd = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] % 2 != 0) {
            odd++;
        }
    }
    return odd <= 1;
}

bool check1(string str, int k) {
    int freq[26] = {0};

    for (char ch : str) {
        freq[ch - 'a']++;
    }

    int removed = 0;

    
    for (int i = 0; i < 26; ++i) {
        if (removed >= k) break;

       
        if (freq[i] % 2 != 0) {
            freq[i]--;
            removed++;
        }
    }

    
    for (int i = 0; i < 26; ++i) {
        if (removed >= k) break;

        while (freq[i] > 0 && removed < k) {
            freq[i]--;
            removed++;
        }
    }

   
    return check2(freq);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        if (check1(s, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
