#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define in(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define out(v) for(int i=0; i<v.size(); i++) cout<<v[i]; cout<<endl;
#define vi vector<int>
#define cyes cout<<"YES"<<endl;
#define cno cout<<"NO"<<endl;
#define ll long long int
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    int x = 0, y = 0;
    for (char i : s) {
        if (i == 'N') y++;
        else if (i == 'S') y--;
        else if (i == 'W') x--;
        else x++;
    }
    
    if (abs(x) % 2 == 1 || abs(y) % 2 == 1) {
        cno;
        return;
    }
    if (n == 2 && x == 0 && y == 0) {
        cno;
        return;
    }
    
    int n_cnt = 0, s_cnt = 0, w_cnt = 1, e_cnt = 1;
    char moves[2] = {'R', 'H'};
    string ans = "";
    
    for (char c : s) {
        if (c == 'N') ans += moves[n_cnt], n_cnt = 1 - n_cnt;
        else if (c == 'S') ans += moves[s_cnt], s_cnt = 1 - s_cnt;
        else if (c == 'W') ans += moves[w_cnt], w_cnt = 1 - w_cnt;
        else ans += moves[e_cnt], e_cnt = 1 - e_cnt;
    }
    
    cout << ans << '\n';
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
