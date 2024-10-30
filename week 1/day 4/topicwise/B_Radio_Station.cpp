#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> ipAddress;
    string name, ip;
    for (int i = 0; i < n; ++i) {
        cin >> name >> ip;
        ipAddress[ip] = name;
    }
    string command, ipCommand;
    for (int i = 0; i < m; ++i) {
        cin >> command >> ipCommand;
        ipCommand.pop_back();
        cout << command << " " << ipCommand << "; #" << ipAddress[ipCommand] << endl;
    }
    return 0;
}
