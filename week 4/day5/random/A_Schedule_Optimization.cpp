#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;


ll solve(int l, int r, const vector<pair<int, int>>& intervals, vector<vector<ll>>& dp) {
    if (l == r) return 0;

    int mid = (l + r) / 2;
    ll costL = solve(l, mid, intervals, dp);
    ll costR = solve(mid + 1, r, intervals, dp);

    ll minCost = INF;
    
    for (int d = intervals[l].first; d <= intervals[l].second; ++d) {
        for (int e = intervals[mid + 1].first; e <= intervals[mid + 1].second; ++e) {
            minCost = min(minCost, costL + costR + abs(d - e));
        }
    }

    return minCost;
}

int main() {
    int N;
    cin >> N;

    int players = (1 << N);
    vector<pair<int, int>> intervals(players);
    for (int i = 0; i < players; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    
    vector<vector<ll>> dp(players, vector<ll>(players, INF));

    
    ll result = solve(0, players - 1, intervals, dp);

    cout << result << endl;

    return 0;
}
