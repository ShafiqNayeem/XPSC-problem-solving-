#include<bits/stdc++.h>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main()
{
    fast;
    
    int t;    cin>>t;
    while(t--)
    {
        ll n;        cin>>n;
        ll ans=1;
        while(ans<=n)
        {
            ans*=2;
        }
        ans/=2;
        ans--;
        cout<<ans<<endl;
    }



    return 0;
}