#include <bits/stdc++.h>
using namespace std;

struct formula {
    const vector<int>& p;
    formula(const vector<int>& p) : p(p) {}

    bool operator()(int i, int j) const {
        return p[i] < p[j];
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        string s;
        
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        cin >> s;
        vector<int> ones, zeros;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1')
                ones.push_back(i);
            else
                zeros.push_back(i);
        }
        sort(ones.begin(), ones.end(), formula(p));
        sort(zeros.begin(), zeros.end(), formula(p));

        vector<int> q(n);
        int rating = 1;
        
        for (int i : zeros)    q[i] = rating++;
        
        for (int i : ones)   q[i] = rating++;
                
        for (int i = 0; i < n; ++i)   cout << q[i] << " ";
        
        cout << endl;
    }
    return 0;
}