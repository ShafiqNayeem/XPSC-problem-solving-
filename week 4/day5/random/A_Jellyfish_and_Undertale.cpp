#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;

    
	while(t--){
 
		int a,b,n;
		cin>>a>>b>>n;
 
		vector <int>arr(n);
		for(int i=0; i<n; i++)
			cin>>arr[i];
 
		ll total = b;
 
		for(auto x:arr){
			total += min(1LL+x,a*1LL) - 1;
		}
		cout<<total<<endl;
 
	}

    return 0;
}
