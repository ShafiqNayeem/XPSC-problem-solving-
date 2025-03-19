#include<bits/stdc++.h>
#define ll long long int
#define fl(i,start,end) for(int i=start;i<end;i++)
#define vc(type) vector<type>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define br <<endl
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void minRemain(int n, vc(int)& a) {
    vc(int) odd, even;

   
    for (int num : a) {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    int oddSize = odd.size(), evenSize = even.size();
    
    if (oddSize == evenSize) {
        cout << 0 br;
        return;
    }
    
    if (oddSize > evenSize) {
        int sum = 0;
        for (int i = evenSize + 1; i < oddSize; i++) {
            sum += odd[i];
        }
        cout << sum br;
    } else {
        int sum = 0;
        for (int i = oddSize + 1; i < evenSize; i++) {
            sum += even[i];
        }
        cout << sum br;
    }
}

int main() {
    int n;
    cin >> n;
    vc(int) a(n);
    
    fl (i,0,n)         cin >> a[i];
    

    minRemain(n, a);

    return 0;
}