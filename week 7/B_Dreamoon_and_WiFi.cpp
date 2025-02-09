#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


long double fact(int n, int k) {
    if (k > n || k < 0) return 0; 
    long double res = 1.0;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    fast;

    string s1, s2;
    cin >> s1 >> s2;

    int c = 0, d = 0, e = 0;
    
    for (char ch : s1) c += (ch == '+' ? 1 : -1);
    for (char ch : s2) {
        if (ch == '+') d++;
        else if (ch == '-') d--;
        else e++; 
    }

    int diff = c - d;
    
    if ((diff + e) % 2 != 0 || abs(diff) > e) {
        cout << fixed << setprecision(12) << 0.0 << endl;
    } 
    else {
        int p = (e + diff) / 2;
        double probability = fact(e, p) / pow(2, e);
        cout << fixed << setprecision(12) << probability << endl;
    }

    return 0;
}
