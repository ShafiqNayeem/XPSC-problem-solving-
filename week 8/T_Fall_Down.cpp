#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define ll long long int
using namespace std;

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);  
        for (int i = 0; i < n; i++) cin >> s[i];

        for (int i = 0; i < m; i++) {
            int j = n - 1; 
            while (j >= 0) {
                if (s[j][i] == '.') {  
                    int k = j - 1;
                    while (k >= 0 && s[k][i] != '*') { 
                        if (s[k][i] == 'o') break;
                        k--;
                    }
                    if (k >= 0 && s[k][i] == '*') {
                        swap(s[j][i], s[k][i]);
                    }
                }
                j--;
            }
        }

        for (int i = 0; i < n; i++) cout << s[i] << endl;  // Output the updated grid
    }
    return 0;
}
