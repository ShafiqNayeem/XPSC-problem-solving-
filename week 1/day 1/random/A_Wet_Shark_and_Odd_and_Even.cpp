#include <bits/stdc++.h>
#include <limits>
#define ll long long int
using namespace std;
ll sumEven(ll n, vector<ll>& num) {
    ll sum = 0;
    int minOdd = INT_MAX;    
    for (int val : num) {
        sum += val;
        if (val % 2 != 0) {
            minOdd = min(minOdd, val);
        }
    }
    if (sum % 2 == 0) {
        return sum;
    } 
        else {
        return sum - minOdd;
    }
}
int main() {
    int n;
    cin >> n;
    vector<ll> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout << sumEven(n, num) << endl;
    return 0;
}
