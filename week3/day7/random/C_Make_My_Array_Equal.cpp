#include <bits/stdc++.h>
#define ll long long int

const int MOD = 1e9 + 7;
using namespace std;

int main() {
    
	int t;cin>>t;
	while(t--)
	{
	    ll n;cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    sort(a,a+n);
	    if(n==1){
	        cout<<"YES"<<endl;
	    }
	    else if(n==2)
	    {
	        if(a[0]==a[1] || a[0]==0||a[1]==0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	    else
	    {
	        int c=0;
	        for(int i=0;i<n-1;i++)
	        {
	            if(a[i]==0)
	            {
	                continue;
	            }
	            else if(a[i]!=a[i+1])
	            {
	                c=1;break;
	            }
	        }
	        if(c==1) cout<<"NO"<<endl;
	        else cout<<"YES"<<endl;
	    }
	}

}
