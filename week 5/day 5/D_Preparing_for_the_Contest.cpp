#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 
    while (t--) {
        int n,k; cin>>n>>k;
        for(int i=n-k; i<=n; i++) cout<<i<<" ";
        for(int i=n-k-1;i>=1;i--) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}
        