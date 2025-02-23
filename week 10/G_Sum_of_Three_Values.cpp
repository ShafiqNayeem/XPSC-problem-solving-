#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){int n;
    ll x;
    cin >> n >> x;

    vector<pair<int, int>> arr(n); 
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1; 
    }

    sort(all(arr));

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        ll target = x - arr[i].first;

        while (left < right) {
            ll sum = arr[left].first + arr[right].first;
            if (sum == target) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second <<endl;
                return ;
            }
            if (sum < target) left++;
            else right--;
        }
    }

    cout << "IMPOSSIBLE"<<endl;

 
}
int main()
{
//     fast;
//  int t; cin>>t;
// while(t--) 
slove();
    return 0;
}