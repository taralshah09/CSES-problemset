#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
	int n;
	cin>>n;

	vector<ll>coins(n);
	for(int i = 0; i<n; i++)cin>>coins[i];

	sort(coins.begin(), coins.end());

	ll val = 1;

	for(auto i:coins) {

		if(i > val) {
			cout<<val<<endl;
			return;
		}
		val += i;
	}

	cout<<val<<endl;
}

int main()
{
	solve();
}