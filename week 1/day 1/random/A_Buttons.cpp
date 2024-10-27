#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    int collect=0;
    cin >> A >> B;
    if (A==B)
    {
        collect=A+A;
    }
    else
    {
        collect = max(A + (A - 1), B + (B - 1));
    }
    cout << collect << endl;
    return 0;
}