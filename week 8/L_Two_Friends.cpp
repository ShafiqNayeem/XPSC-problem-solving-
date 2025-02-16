#include<bits/stdc++.h>
#define ll long long int
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vb vector<bool>
#define vi vector<ll>


#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
 int t; cin>>t;
 while(t--){
    int n;
    cin >> n;
    
    vi p(n);
    for (int i = 0; i < n; i++) cin >> p[i], p[i]--;

    vb visited(n, false);
    vi size;

    
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int length = 0;
            int x = i;

            while (!visited[x]) {
                visited[x] = true;
                x = p[x];
                length++;
            }

            size.push_back(length);
        }
    }

    sort(size.begin(), size.end());

    
    if (size[0] == 2) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl; 
    }
 }



    return 0;
}