#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ms.insert(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++) {
        auto it = ms.upper_bound(b[i]); 
        if (it == ms.begin()) {
            cout << -1 << '\n'; 
        } else {
            --it;
            cout << *it << '\n';
            ms.erase(it); 
        }
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
