#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);    
    while (str.length() < 4) {
        str = "0" + str;
    }
    cout << str << endl;
    return 0;
}