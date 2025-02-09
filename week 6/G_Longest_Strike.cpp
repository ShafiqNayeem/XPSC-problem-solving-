#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;

int main() {
    fast;
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi a(n);
        in(a); 

        sort(a.begin(), a.end());

        map<int, int> occ;
        for (int i = 0; i < n; i++) occ[a[i]]++;

        int L = -1, R = -1, l = -1, r;
        
        for (int i = 0; i < n; i++) {
            if (occ[a[i]] < k) continue;

            if (l == -1) l = a[i]; 
            
            if (i == n - 1 || a[i + 1] - a[i] > 1 || occ[a[i + 1]] < k) { 
                r = a[i]; 

                if (r - l >= R - L) {
                    R = r;
                    L = l;
                }
                l = -1; 
            }
        }

        if (L == -1) cout << -1 << endl;
        else cout << L << " " << R << endl;
    }

    return 0;
}
