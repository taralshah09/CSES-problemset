#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    unordered_map<ll,int> mp;
    mp[0] = 1;
    
    ll sum = 0,cnt = 0;
    
    for(int i = 0;i<n;i++){
        sum += a[i];
        
        if(mp.count(sum-k)){
            cnt += mp[sum-k];
        }
        mp[sum]++;
    }
    
    cout<<cnt<<endl;
}



int main()
{
	solve();
}