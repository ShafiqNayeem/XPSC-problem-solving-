#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 
    while (t--) {
        int n; cin>>n;
        string a,b,c; cin>>a>>b>>c;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}