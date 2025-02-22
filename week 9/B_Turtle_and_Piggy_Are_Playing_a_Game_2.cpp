#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    int n; 
    cin >> n;
    vi a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    // Two pointers to simulate removing elements from both ends
    int left = 0, right = n - 1;
    bool turtle = true, piggy = false;
    
    while (left < right) {
        if (turtle) {
            left++;  // Remove the smallest element
            turtle = false;
            piggy = true;
        }
        else if (piggy) {
            right--;  // Remove the largest element
            turtle = true;
            piggy = false;
        }
    }
    
    // Only one element remains, print it
    cout << a[left] << endl;
}

int main() {
    fast;
    int t; 
    cin >> t; 
    while(t--) solve();  
    return 0;
}
