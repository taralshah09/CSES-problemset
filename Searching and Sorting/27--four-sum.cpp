#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n, target;
    cin >> n >> target;

    vector<pair<int, int>> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n-3; i++) {
        for(int j = i+1;j<n-2;j++){
            
            int l = j + 1;
            int r = n - 1;
    
            while (l < r) {
                int sum = a[i].first + a[j].first + a[l].first + a[r].first;
                if (sum == target) {
                    cout << a[i].second << " " << a[j].second << " " << a[l].second << " " << a[r].second << "\n";
                    return;
                } else if (sum < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}



int main()
{
	solve();
}