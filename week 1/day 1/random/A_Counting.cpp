#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    int count = max(0, B - A + 1);
    cout << count << endl;
    return 0;
}