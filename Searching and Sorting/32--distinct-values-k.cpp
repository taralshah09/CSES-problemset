#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;
    long long ans = 0;
    int l = 0, distinct = 0;

    for (int r = 0; r < n; r++) {
        if (freq[arr[r]] == 0) distinct++;
        freq[arr[r]]++;

        while (distinct > k) {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0) distinct--;
            l++;
        }

        ans += r - l + 1;
    }

    cout << ans << "\n";
}


int main()
{
	solve();
}