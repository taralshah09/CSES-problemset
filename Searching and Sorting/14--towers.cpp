#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{

    int n;
    cin>>n;
    vector<int> cubes(n);
    for(int i = 0;i<n;i++)cin>>cubes[i];
    ll ans = 0;

    multiset<ll> topElements;
    for (int i = 0; i < n; i++) {

        auto it = topElements.upper_bound(cubes[i]);

        if (it == topElements.end()) {
            ans++;
            topElements.insert(cubes[i]);
        }
        else {
            topElements.erase(it);
            topElements.insert(cubes[i]);
        }
    }
    cout<<ans<<endl;
    
}

int main()
{
	solve();
}