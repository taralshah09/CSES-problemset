#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<ll> a(n);
    vector<ll> b(m);
    
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<m;i++){
        cin>>b[i];
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
 
    int i = 0, j = 0,ans = 0;
    
    while(i<n && j <m){
        if(abs(a[i]-b[j]) <= k){
            ans++;
            j++;
            i++;
        }
        else{
            if(a[i] - b[j] > k){
                j++;
            }
            else{
                i++;
            }
        }
    }
    
    cout<<ans<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}