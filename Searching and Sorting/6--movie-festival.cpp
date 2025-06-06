#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> arr(n); 

    for(int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second;
    });

    int endTime = 0, movies = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i].first >= endTime) {
            movies++;
            endTime = arr[i].second;
        }
    }

    cout << movies << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}
