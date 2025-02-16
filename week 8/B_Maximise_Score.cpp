#include<bits/stdc++.h>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];

#define vi vector<int>

#define ll long long int
#define fast ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);
using namespace std;
int main() {
    fast;
	int t;
	cin>>t;
	while(t--){
	    int n,i,p,q;
	    cin>>n;
	    // int a[n];
        vi a(n); in(a);
	    vi v;
	    // for(i=0;i<n;i++)
	    //    cin>>a[i]; 
	    
	    for(i=0;i<n;i++){
	        if(i==0){
	            v.push_back(abs(a[0]-a[1]));
	        }
	        else if(i==n-1){
	            v.push_back(abs(a[n-1]-a[n-2]));
	        }
	        else{
	            p=abs(a[i]-a[i+1]);
	            q=abs(a[i]-a[i-1]);
	            v.push_back(max(p,q));
	        }
	    }
	    sort(v.begin(),v.end());
	    cout<<v[0]<<endl;
	    
	}
	return 0;

}
