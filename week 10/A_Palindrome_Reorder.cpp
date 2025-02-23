#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    // Count frequency of each letter
    vi freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }

    // Count odd frequencies
    ll odd_count = 0;
    char odd_char;
    fl(i, 26) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_char = 'A' + i;
        }
    }

    // More than one odd frequency → No solution
    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }

    // Construct palindrome
    string first_half = "", middle = "";
    
    fl(i, 26) {
        string temp(freq[i] / 2, 'A' + i);
        first_half += temp;
    }

    if (odd_count == 1) {
        middle = odd_char;  // Fix: Only one occurrence in the middle
    }

    string second_half = first_half;
    reverse(all(second_half));

    cout << first_half + middle + second_half << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
