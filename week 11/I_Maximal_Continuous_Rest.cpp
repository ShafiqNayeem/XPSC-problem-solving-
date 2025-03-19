#include <bits/stdc++.h>
#define ll long long int
#define fl(i, start, end) for (int i = start; i < end; i++)

#define br << endl
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    int n;
    cin >> n;
    int row = 0;
    int maxRest = 0;
    
    int a[n];
    fl(i,0,n) {
        cin >> a[i];
    }

    int marge[2 * n];

    fl (i , 0, n) {
        marge[i] = a[i];
        marge[i + n] = a[i];
    }
    for(int rest : marge) {
        if(rest==1)row++;
        else row=0;
        maxRest=max(maxRest,row);
    }
cout<<maxRest<<endl;

}

int main() {
    fast;
    solve();
    return 0;
}
