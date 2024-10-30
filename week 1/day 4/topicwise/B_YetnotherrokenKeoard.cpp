#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin>>str;
    int b =0,B=0;
    deque<char> dq;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='B') {
            B++;
            continue;
        }
        if(str[i]=='b') {
            b++;
            continue;
        }
        if(b && islower(str[i])) {
            b--;
            continue;
        }
        if(B && isupper(str[i])) {
            B--;
            continue;
        }
        dq.push_front(str[i]);
    }
    for(auto &it:dq) {
        cout<<it;}
    cout<<endl;
}
int main()
{
    
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}