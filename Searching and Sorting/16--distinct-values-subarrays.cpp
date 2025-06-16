#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_set<int> s;
    long long ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        
        while (s.find(arr[r]) != s.end()) {
            s.erase(arr[l]);
            l++;
        }
        
        s.insert(arr[r]);
        
        ans += r - l + 1;
    }

    cout << ans << endl;
}


int main()
{
	solve();
}