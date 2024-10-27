#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, t;
    cin >> a >> b >> t;
    int count = 0;
    int time = a;
    while (time <= t + 0.5) {
        count += b;
        time += a;
    }
    cout << count << endl;
    return 0;
}