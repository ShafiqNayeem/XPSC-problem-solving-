#include<bits/stdc++.h>
#define ll long long int
#define fl(i,n) for(int i=0;i<n;i++) 
#define all(v) v.begin(),v.end()
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>
#define cyes cout<<"YES"<<endl;
#define cno cout<<"NO"<<endl;
//tips for lamda function
//auto add = [](int a, int b) { return a + b; }; // cout << add(2, 3);  // Outputs 5
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
 int n,k;
 cin>>n>>k;
 vi arr(n);
 in(arr);
 while (k--)
 {
    int q;
    cin>>q;
    if(binary_search(all(arr),q)) cyes
    else cno
 }
 
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--)
 slove();
    return 0;
}