#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int count=0;
        
        while (1) {
            int flag=-1;
            int prev;
            vector<int> er;
            for(auto &i:freq) {
                if(flag==-1 && i.second>0) {
                    prev=i.first;
                    flag=1;
                    count++;
                    i.second--;
                }
                else if(flag==1 && i.second>0) {
                    if(i.first==prev+1) {
                        i.second--;
                        prev=i.first;
                }
                else break;
                }
                if(i.second==0) er.push_back(i.first);
            }
            for(auto &i:er) freq.erase(i);
            if(flag==-1) break;
        }
        
        
        cout << count << endl;
    }
    
    return 0;
}
