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
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int zero=0,nonzero=0;
        for(int i=0; i<n; i++){
            if(v[i]==0) zero++;
            else nonzero++;
        }
        int ans=0;
        if (zero==0) ans=0;
        else{
            if(nonzero>=zero-1) ans=0;
            else{
                int mx=*max_element(v.begin(),v.end());
                if(mx==1) ans=2;
                else ans=1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
        