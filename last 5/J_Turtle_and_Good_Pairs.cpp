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
    string s;
    cin >> n >> s;
 
    vector<pair<int, char>> freq(26);
    for (int i = 0; i < 26; i++)
        freq[i].second = 'a' + i;
 
    for (char c : s)
        freq[c - 'a'].first++;
 
    sort(freq.rbegin(), freq.rend());
    string result(n, ' ');
 
    int idx = 0;
    for (auto [cnt, ch] : freq)
    {
        if (cnt == 0)
            break;
 
        for (int i = 0; i < cnt; i++)
        {
            if (idx >= n)
                idx = 1;
 
            result[idx] = ch;
            idx += 2;
        }
    }
 
    cout << result << '\n';

 }



    return 0;
}