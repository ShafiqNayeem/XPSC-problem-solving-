#include <bits/stdc++.h>
using namespace std;

int typing(const string& s) {
    int time = 2; 
    for (int i = 1; i < s.size(); ++i) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

string strongPass(const string& s) {
    string bstPass;
    int mxtime= 0;
    
    for (int i = 0; i <= s.size(); ++i) {
        for (char ch = 'a'; ch <= 'z'; ++ch) { 
            string newPass = s.substr(0, i) + ch + s.substr(i); 
            int time = typing(newPass);            
            
            if (time > mxtime|| (time == mxtime&& newPass < bstPass)) {
                mxtime= time;
                bstPass = newPass;
            }
        }
    }
    
    return bstPass;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << strongPass(s) << endl;
    }
    
    return 0;
}