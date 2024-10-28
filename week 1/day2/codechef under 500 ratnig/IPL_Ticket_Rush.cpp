#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;        
        int withoutTickets = max(0, n - m);
        cout << withoutTickets << endl;
    }
    return 0;
}
