#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    
    int cFind = (a + c - 1) / c * c;

    
    if (cFind >= a && cFind <= b) {
        cout << cFind << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}