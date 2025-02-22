#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void slove(){
    int l, r; 
    cin >> l >> r;
    
    // If 2 * l is less than or equal to r, we can use x = l and y = 2 * l
    if (2 * l <= r) {
        cout << l << " " << 2 * l << endl;
    } else {
        cout << -1 << " " << -1 << endl;
    }
}

int main() {
    fast;
    int t; 
    cin >> t; // number of test cases
    
    while (t--) {
        slove();  // solve each test case
    }

    return 0;
}
