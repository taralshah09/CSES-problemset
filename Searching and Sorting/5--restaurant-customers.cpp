#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;

    vector<ll> a(n);
    vector<ll> b(n);
    
    for(int i = 0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int i = 0, j =0;
    
    int curr = 0,maxi = 0;
    
    while(i<n && j<n){
        if(a[i] < b[j]){
            curr++;
            i++;
            maxi = max(maxi,curr);
        }else{
            j++;
            curr--;
        }
    }

    cout<<maxi<<endl;
}

int main() {
    fastio;
    solve();
    return 0;
}
