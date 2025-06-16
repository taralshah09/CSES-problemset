#include <bits/stdc++.h>
#define ll long long

using namespace std;
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool check(const vector<int> &arr, int limit, ll target) {
	int cnt = 1;
	ll sum = 0;

	for (int x : arr) {
		if (sum + x > target) {
			cnt++;
			sum = x;
		} else {
			sum += x;
		}
	}

	return cnt <= limit;
}

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	ll low = *max_element(arr.begin(), arr.end());
	ll high = accumulate(arr.begin(), arr.end(), 0LL);
	ll ans = high;

	while (low <= high) {
		ll mid = (low + high) / 2;

		if (check(arr, k, mid)) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	cout << ans << endl;
}


int main()
{
	solve();
}