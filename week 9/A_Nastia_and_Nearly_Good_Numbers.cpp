#include<bits/stdc++.h>
#define ll long long int

#define cyes cout<<"YES"<<endl;
#define cno cout<<"NO"<<endl;
//tips for lamda function
//auto add = [](int a, int b) { return a + b; }; // cout << add(2, 3);  // Outputs 5
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
 ll a,b; cin>>a>>b;
 ll x,y,z;
 if(b==1){ cno return;}
 else if(b==2){
    cyes
    if(a==1)cout<<3<<" "<< 1<<" "<<4<<endl;
    else{
        b*=a;
        z=a*b;
        b--;
        x=a*b;
        y=a;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
 }
 else{
    cyes
    z=a*b;
    b--;
    x=a*b;
    y=a;
    cout<<x<<" "<<y<<" "<<z<<endl;
 }
}
int main()
{
    fast;
 int t; cin>>t;
while(t--) slove();
    return 0;
}