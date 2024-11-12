#include <bits/stdc++.h>
using namespace std;
int main() {    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > nums(n);
        for (int i = 0; i < n; i++){
            cin >> nums[i];
        }            

        int sum = 0;
        for (int i = 0; i < n; i++) {
            
            if (nums[i] > 0)
                sum += nums[i];
        }        
        if (sum == 0) cout << 0 << endl;
        else {            
            int partL = 0, partR = n - 1;

            while (partL < n) {
                if (nums[partL] <= 0)
                    partL++;
                else
                    break;
            }
            while (partR >= 0) {
                if (nums[partR] <= 0)
                    partR--;
                else
                    break;
            }
            int count = 0;
            for (int i = partL + 1; i < partR; i++) {
                if (nums[i] < 0)
                    count++;
            }
            cout << count << endl;
        }
    }
}