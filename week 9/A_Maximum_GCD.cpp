#include<bits/stdc++.h>
#define ll long long int

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
 int x; cin>>x;
 if(x<=3)cout<<1<<endl;
 else cout<<x/2<<endl;
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}