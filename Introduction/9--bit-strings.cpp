#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;

ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1; 
    }
    
    return result;
}

void solve(){
    int n;
    cin>>n;
    cout<<mod_pow(2,n,MOD)<<endl;
    
}

int main()
{
    solve();
}