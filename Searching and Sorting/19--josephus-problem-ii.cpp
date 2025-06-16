#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;
    k++;

    ordered_set<int> s;
    for (int i = 1; i <= n; i++) s.insert(i);

    int idx = 0;
    while (!s.empty()) {
        idx = (idx + k) % s.size();
        if (idx == 0) idx = s.size(); // 1-based position in PBDS

        auto it = s.find_by_order(idx - 1); // 0-based index!
        cout << *it << " ";
        s.erase(it);
        idx--; // adjust because we removed the current element
    }

    cout << endl;
}

int main() {
    solve();
}
