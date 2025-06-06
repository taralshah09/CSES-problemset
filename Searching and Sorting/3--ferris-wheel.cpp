#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve() {
	ll n,x;
	cin>>n>>x;
	vector<ll> a(n);
 
	for(int i = 0; i<n; i++) {
		cin>>a[i];
	}
 
	sort(a.begin(),a.end());
	vector<bool> vis(n,false);
	int ans = 0;
	int i = 0, j =n-1;
 
	while(i<j) {
		
		if(a[i] + a[j] > x) {
			j--;
		}
		else {
			vis[i]=true;
			vis[j]=true;
			i++;
			j--;
			ans++;
		}
	}
	
	
	for (int i = 0; i < n; ++i) {
		ans += vis[i] == false;
	}
	cout << ans << "\n";
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}
