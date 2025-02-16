#include<bits/stdc++.h>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    
    
        int n;
        cin >> n;
        
        string result = "";
        for (int i = 0; i < n; i++) {
            if (i % 4 < 2) result += 'a';
            else result += 'b';
        }
        
        cout << result << endl;
    



    return 0;
}