#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define cyes cout<<"yes"<<endl;
#define cno cout<<"no"<<endl;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = 1;
        int b = 0;
        int count = 0;
        while (a*2<=n){
            a = a*2;
            count++;
        }
        int ans = 1;
        bool check = false;
        for (int i = count - 1; i >= 0; i--) {
            if ((n&1<<i)){
                b = b | (1<<i);
                check = true;
            } else {
                if (check) ans = ans * 2;
            }
        }
        cout<<ans<<endl;
    }



    return 0;
}