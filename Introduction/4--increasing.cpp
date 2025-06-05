#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    
    ll count = 0;
    
    for(int i = 1;i<n;i++){
        if(a[i] < a[i-1]){
            count += a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    
    cout<<count<<endl;
}

int main() {
    solve();
    return 0;
}
