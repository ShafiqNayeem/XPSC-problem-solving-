#include<bits/stdc++.h>
#define ll long long int
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define vi vector<int>
#define vll vector<ll>

#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
void slove(){
    ll x; cin>>x;
    vll lcm;
    ll i=2;
    while(i*i<=x){
        if(x%i==0){
            ll cul =1;
            while(x%i==0){
                x/=i;
                cul*=i;
            }
            lcm.push_back(cul);
        }
        i++;
    }
    if(x>1) lcm.push_back(x);
    ll n=lcm.size();
    ll ans_1=1e18;
    ll ans_2=1e18;

    ll k=0;
    while (k<(1<<n)){
        ll a = 1;
        ll b = 1;

        ll j = 0;
        while (j < n)
        {
            if ((k >> j) & 1)
            {
                a *= lcm[j];
            }
            else
            {
                b *= lcm[j];
            }
            j++;
        }

        if (max(a, b) < max(ans_1, ans_2))
        {
            ans_1 = a;
            ans_2 = b;
        }
        k++;
    }
    cout << ans_1 << " " << ans_2 << endl;
    
 
}
int main()
{
    fast;
//  int t; cin>>t;
// while(t--)
 slove();
    return 0;
}