#include<bits/stdc++.h>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
 
    ll t;
    cin>>t;
    while(t--) {
        ll n, num, flag = 0, first = -1, last = -1;
        cin>>n;
        while(n--) {
            cin>>num;
            if(flag) {
                if(num >= last and num <= first) {
                    last = num;
                    cout<<1;
                }
                else {
                    cout<<0;
                }
            }
            else {
                if(first == -1) {
                    first = num;
                    last = num;
                    cout<<1;
                }
                else if(num >= last) {
                    last = num;
                    cout<<1;
                }
                else if(first >= num) {
                    last = num;
                    flag = 1;
                    cout<<1;
                }
                else {
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
    return 0;     
 }        