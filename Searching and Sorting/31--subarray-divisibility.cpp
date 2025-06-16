#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<ll, ll> remaindersCnt;

    remaindersCnt[0] += 1;
    ll remainder = 0;
    ll cnt = 0;

    for (int i = 0; i < n; ++i) {
        remainder = ((remainder + arr[i]) % n + n) % n;
        cnt += remaindersCnt[remainder];
        remaindersCnt[remainder] += 1;
    }
    cout<<cnt<<endl;
}


int main()
{
	solve();
}